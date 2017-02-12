/*
* Created by Mark on 2/9/2017.
*/
#ifndef SNOWBOY_RS_SNOWBOY_DETECT_WRAPPER
#define SNOWBOY_RS_SNOWBOY_DETECT_WRAPPER

#include "snowboy/snowboy-detect.h"
#include "snowboy-detect-wrapper.h"

extern "C" {
CSnowboyDetect* CSnowboyDetect_create(const char* resource_filename, const char* model_str) {
    return reinterpret_cast<CSnowboyDetect*>(new snowboy::SnowboyDetect(std::string(resource_filename),
                                                                        std::string(model_str)));
}

bool CSnowboyDetect_reset(CSnowboyDetect* detector) {
    return reinterpret_cast<snowboy::SnowboyDetect*>(detector)->Reset();
}

int CSnowboyDetect_runCharDetection(CSnowboyDetect* detector, const char* data) {
    return reinterpret_cast<snowboy::SnowboyDetect*>(detector)->RunDetection(std::string(data));
}

int CSnowboyDetect_runFloatArrayDetection(CSnowboyDetect* detector, const float* const data, const int array_length) {
    return reinterpret_cast<snowboy::SnowboyDetect*>(detector)->RunDetection(data, array_length);
}

int CSnowboyDetect_runShortArrayDetection(CSnowboyDetect* detector, const int16_t* const data,
                                          const int array_length) {
    return reinterpret_cast<snowboy::SnowboyDetect*>(detector)->RunDetection(data, array_length);
}

int CSnowboyDetect_runIntegerArrayDetection(CSnowboyDetect* detector, const int32_t* const data,
                                            const int array_length) {
    return reinterpret_cast<snowboy::SnowboyDetect*>(detector)->RunDetection(data, array_length);
}

void CSnowboyDetect_setSensitivity(CSnowboyDetect* detector, const char* sensitivity_str) {
    reinterpret_cast<snowboy::SnowboyDetect*>(detector)->SetSensitivity(std::string(sensitivity_str));
}

const char* CSnowboyDetect_getSensitivity(CSnowboyDetect* detector) {
    return reinterpret_cast<snowboy::SnowboyDetect*>(detector)->GetSensitivity().c_str();
}

void CSnowboyDetect_setAudioGain(CSnowboyDetect* detector, const float audio_gain) {
    reinterpret_cast<snowboy::SnowboyDetect*>(detector)->SetAudioGain(audio_gain);
}

void CSnowboyDetect_updateModel(CSnowboyDetect* detector) {
    reinterpret_cast<snowboy::SnowboyDetect*>(detector)->UpdateModel();
}

int CSnowboyDetect_numHotwords(CSnowboyDetect* detector) {
    return reinterpret_cast<snowboy::SnowboyDetect*>(detector)->NumHotwords();
}

void CSnowboyDetect_applyFrontend(CSnowboyDetect* detector, const bool apply_frontend) {
    reinterpret_cast<snowboy::SnowboyDetect*>(detector)->ApplyFrontend(apply_frontend);
}

int CSnowboyDetect_sampleRate(CSnowboyDetect* detector) {
    return reinterpret_cast<snowboy::SnowboyDetect*>(detector)->SampleRate();
}

int CSnowboyDetect_numChannels(CSnowboyDetect* detector) {
    return reinterpret_cast<snowboy::SnowboyDetect*>(detector)->NumChannels();
}

int CSnowboyDetect_bitsPerSample(CSnowboyDetect* detector) {
    return reinterpret_cast<snowboy::SnowboyDetect*>(detector)->BitsPerSample();
}

void CSnowboyDetect_destroy(CSnowboyDetect* detector) {
    delete reinterpret_cast<snowboy::SnowboyDetect*>(detector);
}
}

#endif //SNOWBOY_RS_SNOWBOY_DETECT_WRAPPER