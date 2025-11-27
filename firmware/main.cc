#include <math.h>

#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tensorflow/lite/micro/system_setup.h"
#include "tensorflow/lite/schema/schema_generated.h"

#include "models/hello_world_int8_model_data.h"

constexpr int kTensorArenaSize = 4000;
uint8_t tensor_arena[kTensorArenaSize];