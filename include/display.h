#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>

enum MSG {
  NONE,
  FRIENDLY_ID,
  WIFI_CONNECT,
  WIFI_FAILED,
  WIFI_WEAK,
  WIFI_INTERNAL_ERROR,
  API_ERROR,
  API_SIZE_ERROR,
  FW_UPDATE,
  FW_UPDATE_FAILED,
  FW_UPDATE_SUCCESS,
  BMP_FORMAT_ERROR,
  MAC_NOT_REGISTERED,
  TEST,
};

/**
 * @brief Function to init the display
 * @param none
 * @return none
 */
void display_init(void);

/**
 * @brief Function to reset the display
 * @param none
 * @return none
 */
void display_reset(void);

/**
 * @brief Function to show the image on the display
 * @param image_buffer pointer to the uint8_t image buffer
 * @param reverse shows if the color scheme is reverse 
 * @return none
 */
void display_show_image(uint8_t * image_buffer, bool reverse, uint8_t mirror);

/**
 * @brief Function to show the image with message on the display
 * @param image_buffer pointer to the uint8_t image buffer
 * @param message_type type of message that will show on the screen
 * @param additional_info an additional short string
 */
void display_show_msg(uint8_t * image_buffer, MSG message_type, String additional_info);

/**
 * @brief Function to show the image with message on the display
 * @param image_buffer pointer to the uint8_t image buffer
 * @param message_type type of message that will show on the screen
 * @param friendly_id device friendly ID
 * @param id shows if ID exists
 * @param fw_version version of the firmaware
 * @param message additional message
 * @param additional_info an additional short string
 * @return none
 */
void display_show_msg(uint8_t * image_buffer, MSG message_type, String friendly_id, bool id, const char * fw_version, String message, String additional_info);

/**
 * @brief Function to got the display to the sleep
 * @param none
 * @return none
 */
void display_sleep(void);

#endif