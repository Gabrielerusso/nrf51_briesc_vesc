/*
	Copyright 2018 Benjamin Vedder	benjamin@vedder.se

	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef DATATYPES_H_
#define DATATYPES_H_

#include <stdint.h>
#include <stdbool.h>

typedef enum {
	MOTE_PACKET_BATT_LEVEL = 0,
	MOTE_PACKET_BUTTONS,
	MOTE_PACKET_ALIVE,
	MOTE_PACKET_FILL_RX_BUFFER,
	MOTE_PACKET_FILL_RX_BUFFER_LONG,
	MOTE_PACKET_PROCESS_RX_BUFFER,
	MOTE_PACKET_PROCESS_SHORT_BUFFER,
	MOTE_PACKET_PAIRING_INFO
} MOTE_PACKET;

// Communication commands
typedef enum {
	COMM_FW_VERSION							= 0,
	COMM_JUMP_TO_BOOTLOADER					= 1,
	COMM_ERASE_NEW_APP						= 2,
	COMM_WRITE_NEW_APP_DATA					= 3,
	COMM_GET_VALUES							= 4,
	COMM_SET_DUTY							= 5,
	COMM_SET_CURRENT						= 6,
	COMM_SET_CURRENT_BRAKE					= 7,
	COMM_SET_RPM							= 8,
	COMM_SET_POS							= 9,
	COMM_SET_HANDBRAKE						= 10,
	COMM_SET_DETECT							= 11,
	COMM_SET_SERVO_POS						= 12,
	COMM_SET_MCCONF							= 13,
	COMM_GET_MCCONF							= 14,
	COMM_GET_MCCONF_DEFAULT					= 15,
	COMM_SET_APPCONF						= 16,
	COMM_GET_APPCONF						= 17,
	COMM_GET_APPCONF_DEFAULT				= 18,
	COMM_SAMPLE_PRINT						= 19,
	COMM_TERMINAL_CMD						= 20,
	COMM_PRINT								= 21,
	COMM_ROTOR_POSITION						= 22,
	COMM_EXPERIMENT_SAMPLE					= 23,
	COMM_DETECT_MOTOR_PARAM					= 24,
	COMM_DETECT_MOTOR_R_L					= 25,
	COMM_DETECT_MOTOR_FLUX_LINKAGE			= 26,
	COMM_DETECT_ENCODER						= 27,
	COMM_DETECT_HALL_FOC					= 28,
	COMM_REBOOT								= 29,
	COMM_ALIVE								= 30,
	COMM_GET_DECODED_PPM					= 31,
	COMM_GET_DECODED_ADC					= 32,
	COMM_GET_DECODED_CHUK					= 33,
	COMM_FORWARD_CAN						= 34,
	COMM_SET_CHUCK_DATA						= 35,
	COMM_CUSTOM_APP_DATA					= 36,
	COMM_NRF_START_PAIRING					= 37,
	COMM_GPD_SET_FSW						= 38,
	COMM_GPD_BUFFER_NOTIFY					= 39,
	COMM_GPD_BUFFER_SIZE_LEFT				= 40,
	COMM_GPD_FILL_BUFFER					= 41,
	COMM_GPD_OUTPUT_SAMPLE					= 42,
	COMM_GPD_SET_MODE						= 43,
	COMM_GPD_FILL_BUFFER_INT8				= 44,
	COMM_GPD_FILL_BUFFER_INT16				= 45,
	COMM_GPD_SET_BUFFER_INT_SCALE			= 46,
	COMM_GET_VALUES_SETUP					= 47,
	COMM_SET_MCCONF_TEMP					= 48,
	COMM_SET_MCCONF_TEMP_SETUP				= 49,
	COMM_GET_VALUES_SELECTIVE				= 50,
	COMM_GET_VALUES_SETUP_SELECTIVE			= 51,
	COMM_EXT_NRF_PRESENT					= 52,
	COMM_EXT_NRF_ESB_SET_CH_ADDR			= 53,
	COMM_EXT_NRF_ESB_SEND_DATA				= 54,
	COMM_EXT_NRF_ESB_RX_DATA				= 55,
	COMM_EXT_NRF_SET_ENABLED				= 56,
	COMM_DETECT_MOTOR_FLUX_LINKAGE_OPENLOOP	= 57,
	COMM_DETECT_APPLY_ALL_FOC				= 58,
	COMM_JUMP_TO_BOOTLOADER_ALL_CAN			= 59,
	COMM_ERASE_NEW_APP_ALL_CAN				= 60,
	COMM_WRITE_NEW_APP_DATA_ALL_CAN			= 61,
	COMM_PING_CAN							= 62,
	COMM_APP_DISABLE_OUTPUT					= 63,
	COMM_TERMINAL_CMD_SYNC					= 64,
	COMM_GET_IMU_DATA						= 65,
	COMM_BM_CONNECT							= 66,
	COMM_BM_ERASE_FLASH_ALL					= 67,
	COMM_BM_WRITE_FLASH						= 68,
	COMM_BM_REBOOT							= 69,
	COMM_BM_DISCONNECT						= 70,
	COMM_BM_MAP_PINS_DEFAULT				= 71,
	COMM_BM_MAP_PINS_NRF5X					= 72,
	COMM_ERASE_BOOTLOADER					= 73,
	COMM_ERASE_BOOTLOADER_ALL_CAN			= 74,
	COMM_PLOT_INIT							= 75,
	COMM_PLOT_DATA							= 76,
	COMM_PLOT_ADD_GRAPH						= 77,
	COMM_PLOT_SET_GRAPH						= 78,
	COMM_GET_DECODED_BALANCE				= 79,
	COMM_BM_MEM_READ						= 80,
	COMM_WRITE_NEW_APP_DATA_LZO				= 81,
	COMM_WRITE_NEW_APP_DATA_ALL_CAN_LZO		= 82,
	COMM_BM_WRITE_FLASH_LZO					= 83,
	COMM_SET_CURRENT_REL					= 84,
	COMM_CAN_FWD_FRAME						= 85,
	COMM_SET_BATTERY_CUT					= 86,
	COMM_SET_BLE_NAME						= 87,
	COMM_SET_BLE_PIN						= 88
} COMM_PACKET_ID;

typedef struct {
	char name[42];
	int pin[10];
	int pin_length;
	bool name_set;
	bool pin_set;
} config_data;

#endif /* DATATYPES_H_ */
