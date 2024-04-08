#define BTSTACK_FILE__ "coordinated_set_identification_service.c"

#include <stdio.h>
#include <stdint.h>
#include "bluetooth.h"

/** SIRK Length */
#define CSIP_SIRK_LEN 16U

typedef struct {
    /**
     *  Type
     *  0 - Encrypted
     *  1 - Plain
     */
    uint8_t type;

    /**
     *  SIRK Value
     */
    uint8_t value[CSIP_SIRK_LEN];

} sirk_t;

sirk_t csid_sirk = {.type = 1, .value = "wuqi-tech"};
uint8_t csis_size = 0x02;
uint8_t csis_rank = 0x01;
uint8_t csis_lock = 0x01;   //0x01 - Unlocked


static int csis_write_callback(hci_con_handle_t con_handle, uint16_t attribute_handle, uint16_t transaction_mode, uint16_t offset, uint8_t *buffer, uint16_t buffer_size){

}
