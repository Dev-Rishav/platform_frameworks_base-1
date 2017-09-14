/**
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ANDROID_SERVER_BROADCASTRADIORADIO_TUNER_H
#define _ANDROID_SERVER_BROADCASTRADIORADIO_TUNER_H

#include "types.h"

#include "JavaRef.h"

#include <android/hardware/broadcastradio/1.1/IBroadcastRadio.h>
#include <android/hardware/broadcastradio/1.2/ITuner.h>
#include <android/hardware/broadcastradio/1.2/ITunerCallback.h>
#include <jni.h>
#include <utils/StrongPointer.h>

namespace android {

void register_android_server_broadcastradio_Tuner(JavaVM *vm, JNIEnv *env);

namespace server {
namespace BroadcastRadio {
namespace Tuner {

void assignHalInterfaces(JNIEnv *env, JavaRef<jobject> const &jTuner,
        sp<hardware::broadcastradio::V1_0::IBroadcastRadio> halModule,
        sp<hardware::broadcastradio::V1_0::ITuner> halTuner);

sp<hardware::broadcastradio::V1_2::ITunerCallback>
getNativeCallback(JNIEnv *env, JavaRef<jobject> const &tuner);

Region getRegion(JNIEnv *env, jobject obj);

} // namespace Tuner
} // namespace BroadcastRadio
} // namespace server
} // namespace android

#endif // _ANDROID_SERVER_BROADCASTRADIORADIO_TUNER_H
