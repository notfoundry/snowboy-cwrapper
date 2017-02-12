/*
* Created by Mark on 2/9/2017.
*/

#ifndef SNOWBOY_RS_SNOWBOY_DETECT_WRAPPER_H
#define SNOWBOY_RS_SNOWBOY_DETECT_WRAPPER_H

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
typedef struct CSnowboyDetect CSnowboyDetect;

CSnowboyDetect* CSnowboyDetect_create(const char* resource_filename, const char* model_str);

bool CSnowboyDetect_reset(CSnowboyDetect* detector);

int CSnowboyDetect_runCharDetection(CSnowboyDetect* detector, const char* data);

int CSnowboyDetect_runFloatArrayDetection(CSnowboyDetect* detector, const float* const data, const int array_length);

int CSnowboyDetect_runShortArrayDetection(CSnowboyDetect* detector, const int16_t* const data,
                                          const int array_length);

int CSnowboyDetect_runIntegerArrayDetection(CSnowboyDetect* detector, const int32_t* const data,
                                            const int array_length);

void CSnowboyDetect_setSensitivity(CSnowboyDetect* detector, const char* sensitivity_str);

const char* CSnowboyDetect_getSensitivity(CSnowboyDetect* detector);

void CSnowboyDetect_setAudioGain(CSnowboyDetect* detector, const float audio_gain);

void CSnowboyDetect_updateModel(CSnowboyDetect* detector);

int CSnowboyDetect_numHotwords(CSnowboyDetect* detector);

void CSnowboyDetect_applyFrontend(CSnowboyDetect* detector, const bool apply_frontend);

int CSnowboyDetect_sampleRate(CSnowboyDetect* detector);

int CSnowboyDetect_numChannels(CSnowboyDetect* detector);

int CSnowboyDetect_bitsPerSample(CSnowboyDetect* detector);

void CSnowboyDetect_destroy(CSnowboyDetect* detector);
#ifdef __cplusplus
}
#endif

#endif //SNOWBOY_RS_SNOWBOY_DETECT_WRAPPER_H
