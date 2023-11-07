/**
 * @file wanosFilterManager.h
 * @author Yan Zhang (zhang.yan@wavarts.com)
 * @brief
 * @version 0.1
 * @date 2023-05-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#pragma once

#define BUILD_DLL

#ifdef BUILD_DLL
# if defined (_WIN32) || (__WIN32__)
#   ifdef COMPILING
#     define WANOS_API __declspec(dllexport)
#   else
#     define WANOS_API __declspec(dllimport)
#   endif
# else
#   ifdef COMPILING
#     define WANOS_API __attribute__((visibility("default")))
#   else
#     define WANOS_API
#   endif
# endif
#else
# define WANOS_API
#endif

namespace wanosFilterManager
{
  typedef struct wanos_fm_s wanos_fm_params;
  typedef enum
  {
    WANOS_FM_SUCCESS,
    WANOS_FM_HANDLE_INIT_FAILURE,
    WANOS_FM_INVALID_CHANNEL_ID,
  } wanos_fm_err;

  /**
   * @brief initialize the filter manager handle
   *
   * @param channelNum [in] number of speaker in the system
   * @param frameSize  [in] system frame size
   * @param fs         [in] system sampling frequency
   * @return wanos_fm_params*
   */
  WANOS_API wanos_fm_params* wanos_fm_params_init(int channelNum, int frameSize, int fs);

  /**
   * @brief insert new or update filter in the filter manager
   *
   * @param handle    [in] filter manager handle
   * @param channelID [in] specific channel that will be updated
   * @param filterID  [in] identical filter ID for new filter or
   *                       specific filter ID that will be updated
   * @param filterObj [in] pointer of the filter
   * @return wanos_fm_err
   */
  WANOS_API wanos_fm_err wanos_fm_update_filter(wanos_fm_params* handle,
    int channelID,
    int filterID,
    void* filterObj);

  /**
   * @brief remove the specific filter from the filter manager
   *
   * @param handle    [in] filter manager handle
   * @param channelID [in] specific channel that will be updated
   * @param filterID  [in] filter ID of the target filter
   * @return wanos_fm_err
   */
  WANOS_API wanos_fm_err wanos_fm_remove_filter(wanos_fm_params* handle,
    int channelID,
    int filterID);

  /**
   * @brief calculate the total magnitude response in dB
   *        at a specific frequency
   *
   * @param handle    [in] filter manager handle
   * @param channelID [in] specific channel
   * @param frequency [in] target frequency
   * @return float
   */
  WANOS_API float wanos_fm_get_total_magnitude_response(wanos_fm_params* handle,
    int channelID,
    float frequency);

  /**
   * @brief calculate the filter parameters for a specific channel
   *
   * @param handle    [in] filter manager handle
   * @param channelID [in] target channel
   * @return
   */
  WANOS_API void wanos_fm_get_total_filter_param(wanos_fm_params* handle, int channelID, float* params);

  /**
   * @brief free and destroy the filter manager
   *
   * @param handle [in] filter manager handle
   * @return wanos_fm_err
   */
  WANOS_API wanos_fm_err wanos_fm_free(wanos_fm_params* handle);
} /* namespace wanosFilterManager */
