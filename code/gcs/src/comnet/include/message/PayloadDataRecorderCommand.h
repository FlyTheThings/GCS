/**@file This file was autogenerated. All changes will be undone. */

/** Message: Payload_Data_Recorder_Command, ID: 3001*/

#ifndef _PAYLOAD_DATA_RECORDER_COMMAND_H_
#define _PAYLOAD_DATA_RECORDER_COMMAND_H_

#include <comnet_marshal.h>
#include <comnet_message.h>

#include"random_numbers.h"
#include "aes.h"
using CryptoPP::AES;
#include "ccm.h"
using CryptoPP::CFB_Mode;
typedef struct {
   float64_t timestamp;
   uint16_t payload_ID;
   uint8_t payload_recorder_mode;
} payload_data_recorder_command_t;

msg_offset pack_payload_data_recorder_command(
   payload_data_recorder_command_t* payload_data_recorder_command,
   msg_offset offset);

msg_offset unpack_payload_data_recorder_command(
   msg_offset offset,
   payload_data_recorder_command_t* out_ptr);

void encode_payload_data_recorder_command(
   uint8_t src_id,
   uint8_t dest_id,
   payload_data_recorder_command_t* tx_msg,
   com_msg_t* msg,
   uint8_t keyArr[]);//key for encryption CryptoPP

#endif