#define ClearPortFeatureRequestType 0x23 /* clear request type for hub */
#define ClearFeaturebRequest 0x01 /*0x01 indicates a clear op */
#define PortPowerFeature 0x08  /*Power for downstream USB ports */
#define SetPortFeatureRequestType 0x23 /*set request type for hub */
#define SetFeaturebRequest 0x03 /*0x00 indicates a set op */
#define PORT_0  0x00 /* Downstream port zero */
#define PORT_1  0x01 /* Downstream port one */
#define PORT_2  0x02 /* Downstream port two */
#define PORT_3  0x03 /* Downstream port three */
#define PORT_4  0x04 /* Downstream port four */
#define Cypress 0x04B4 /*Cypress vendor ID */
#define D_Link 0x05E3 /* D-Link vendor ID*/
#define ClearFeaturewLength 0x0000 /*0x01 indicates a clear op */
#define FALSE 0
#define TRUE 1

void print_endpoint(struct usb_endpoint_descriptor *endpoint);
void print_altsetting(struct usb_interface_descriptor *interface);
void print_interface(struct usb_interface *interface);
void print_configuration(struct usb_config_descriptor *config);
void power_off(char []);
int check_args(int, char []);
void power_on(char []);
void display_devices();
void print_help();

