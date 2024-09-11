#include "esphome/core/log.h"
#include "fall_detector_binary_sensor.h"

namespace esphome {
namespace c1001 {

static const char *TAG = "c1001.binary_sensor";

void C1001BinarySensor::setup() {
    
}
  
void C1001BinarySensor::update() {

}

void C1001BinarySensor::dump_config() {
    ESP_LOGCONFIG(TAG, "C1001 binary sensor");
}

} //namespace c1001
} //namespace esphome