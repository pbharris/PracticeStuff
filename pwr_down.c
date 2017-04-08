
#include<stdio.h>
/*#include"libusb-0.1.12/usb.h" */
#include<usb.h>
#include"pwr_down.h"



int main(int argc, char* argv[])
{
   struct usb_bus *bus;
   struct usb_device *dev;
   int ret, i;
   char string[256];
   usb_dev_handle *udev;
printf("one: %c\n", *argv[1]);
printf("two: %c\n", *++argv[1]);
if (argc == 1)
   print_help();
else 
 if (argc == 2) {
    printf("argc = 2\n");
printf("one: %c\n", *argv[1]);
printf("two: %c\n", *++argv[1]);


    if ((*argv[0] == '-') && (*++argv[0] == 'd'))
       display_devices(); 
    }
    else
    print_help(); 
/*
if (!check_args(argc, argv[2])) {    // Check arguments for errors
   print_help();
  }
    
else 
 if (argc == 1) {
       print_help();
       }
 else {

switch (*++argv[1]) {
       case 'd' :
       display_devices();
       break;

       case 'h' :
       print_help();
       break;
      
       case 'n' :
       power_on(argv[2]);
       break;
       
       case 'f' :
       power_off(argv[2]);
       break;
    
       default:
       printf("Unkown Error - Exiting \n");
       }
}

*/

return 0;
}



/* Device descriptor */
/* from usb.h
 * struct usb_device_descriptor {
 * 	u_int8_t  bLength;
 * 	u_int8_t  bDescriptorType;
 * 	u_int16_t bcdUSB;
 * 	u_int8_t  bDeviceClass;
 * 	u_int8_t  bDeviceSubClass;
 * 	u_int8_t  bDeviceProtocol;
 * 	u_int8_t  bMaxPacketSize0;
 * 	u_int16_t idVendor;
 * 	u_int16_t idProduct;
 * 	u_int16_t bcdDevice;
 * 	u_int8_t  iManufacturer;
 * 	u_int8_t  iProduct;
 * 	u_int8_t  iSerialNumber;
 * 	u_int8_t  bNumConfigurations;
 * };
 */

void display_devices()
{
   printf("Opening devices for display.\n");
   struct usb_bus *bus;
   struct usb_device *dev;
   usb_dev_handle *udev;
   int ret, i;
   usb_init();
   usb_find_busses();
   usb_find_devices();
   char string[256];
   int device_found = 0;

   for (bus = usb_busses; bus; bus = bus->next) {
   for (dev = bus->devices; dev; dev = dev->next) {
   
   if (dev->descriptor.idVendor == D_Link) {
      udev = usb_open(dev);
      
      if (udev) {

ret = usb_get_string_simple(udev, dev->descriptor.iSerialNumber, string, sizeof(string));
      printf("\nVendor ID: 04B4 (Cypress) Product ID: TBD   Serial Number:%s\n", string);         
      device_found = 1;     
             } 
           
           
            
      else 
           printf("Error opening device for Serial Number retrieval. \n");
          }

 else 
      printf("");
      
}}
usb_close (udev); 


if (!device_found)
    printf("No devices found\n");


}

// Function: power_on
// Attempts to power on device specified by user.  Prints acknowledgement if successful.
// Prints errors if:
//  -Device not found
//  -Device power on command fails
//  -No devices attached to system
void power_on(char serialNumber[])
{
   struct usb_bus *bus;
   struct usb_device *dev;
   usb_dev_handle *udev;
   int ret, i, device_found = 0;
   usb_init();
   usb_find_busses();
   usb_find_devices();
   char string[256];
   printf("Attemping to power on device with serial number: %s\n", serialNumber);
 
     for (bus = usb_busses; bus; bus = bus->next) {
     for (dev = bus->devices; dev; dev = dev->next) {
   
   if (dev->descriptor.idVendor == D_Link) {
      udev = usb_open(dev);
      if (udev) {
                ret = usb_get_string_simple(udev, dev->descriptor.iSerialNumber, string, sizeof(string));
                if (!strcmp(string,serialNumber)){
                  ret = usb_control_msg(udev,
				  SetPortFeatureRequestType,
				  SetFeaturebRequest,
				  PortPowerFeature,
				  PORT_3,
				  0,
				  0,
				  5000
				 );
                  if (ret >= 0) {
                      printf("Device powered successfully.\n");
                      device_found = 1;
                      }
                  else 
                      printf("Error occured while powering on device. \n");
                      
               }  // big IF

      
            } //udev
                                
 usb_close (udev); 
      } //If Vendor
}  //For
} //for

//usb_close (udev); 
       if (!device_found)        
       printf("No devices with serial number %s found.  Reconnect device and try again.\n", serialNumber[2]); 
 //local if
} //function

// Function power_off:
// Attempts to power off device specified by user.  Prints acknowledgement if successful.
// Prints errors if:
//  -Device not found
//  -Device power off command fails
//  -No devices attached to system

void power_off(char serialNumber[])
{
   struct usb_bus *bus;
   struct usb_device *dev;
   usb_dev_handle *udev;
   int ret, i;
   usb_init();
   usb_find_busses();
   usb_find_devices();
   char string[256];
   int device_found = 0;
   printf("Attempting to power off device with serial number: %s\n", serialNumber);
 
     for (bus = usb_busses; bus; bus = bus->next) {
     for (dev = bus->devices; dev; dev = dev->next) {
   
   if (dev->descriptor.idVendor == Cypress) {
      udev = usb_open(dev);
      if (udev) {
                ret = usb_get_string_simple(udev, dev->descriptor.iSerialNumber, string, sizeof(string));
                if (!strcmp(string,serialNumber)){
                  ret = usb_control_msg(udev,
				  ClearPortFeatureRequestType,
				  ClearFeaturebRequest,
				  PortPowerFeature,
				  PORT_3,
				  0,
				  0,
				  5000
				 );
                  device_found = 1;
                  if (ret >= 0) {
                     printf("Device powered off successfully\n");
                     }
                  else {
                     printf("Error occured while powering off device.");
                     }
                  }
                 
            //  else 
                }           
              
              else 
              printf("No devices found.  Reconnect device and try again.\n"); 

}
}
}
usb_close (udev); 
}

// Function: print_help()
// Displays help screen
void print_help()
{
printf("Usage: pwrctrl [OPTION]... [SERIAL]...\n");
printf("Control power to devices; List serial numbers of devices\n\n");
printf("Arguments:\n");
printf("-n [SERIAL]    power on device specified by [SERIAL]\n");
printf("-f [SERIAL]    power off device specified by [SERIAL]\n");
printf("-d             display all devices attached to system\n");
printf("-h             display this help and exit\n");
}

//  Function: check_args
//  Checks all aspects of command-line arguments for errors
//  Errors checked for:
//     1)  Number of arguments are not equal to 1, 2, or 3.
//     2)  Characters in serial number argument greater than 20
//     3)  Switch argument not two chars; '-' followed by 'd' 'n' 'h' 'f'
int check_args(int ARGC, char ARGV[])
{
 int ret = 0;

 printf("STRING LENGTH: %i \n", strlen(ARGV));
 if (
    (ARGC >= 4) || 
    (strlen(ARGV) > 20)
                      )   {
  ret = 0;
  printf("\nerrors!\n");
  }
   
  else {
  printf("OK! \n");
  ret = 1;
  }
return ret;
}






  /* 
  * usb_init() - Used to initialize Libusb and establish connection with kernel structures .
  * usb_find_busses() - Looks for all the USB busses on the computer.
  * usb_find_devices() - Looks for all the USB devices connected to the computer.
  * usb_open(dev) - Opens the device 'dev' which is given as argument to this function.
  * usb_get_string_simple() - Used to extract the string descriptor of the device taken argument.
  */  
  
