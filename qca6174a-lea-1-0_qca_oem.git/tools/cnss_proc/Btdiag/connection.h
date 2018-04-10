/* 
Copyright (c) 2013 Qualcomm Atheros, Inc.
All Rights Reserved. 
Qualcomm Atheros Confidential and Proprietary. 
*/
#include <termios.h>

#define HCI_UART_H4	            0

#define HCI_UART_RAW_DEVICE	    0

int read_hci_event(int fd, unsigned char* buf, int size);
int qca_soc_init(int fd, int speed, char *bdaddr);

#ifndef BTDIAG_SUPPORT_BT_USB
#include <stdint.h>
/* BD Address */
typedef struct {
	uint8_t b[6];
} __attribute__((packed)) bdaddr_t;

struct hci_filter {
	uint32_t type_mask;
	uint32_t event_mask[2];
	uint16_t opcode;
};
#endif
