#include "esphome/core/log.h"
#include "fall_detector.h"

namespace esphome {
namespace fall_detector {

static const char *TAG = "fall_detector.component";

C1001() : PollingComponent(5000) { 


    void C1001::setup() {
        if (!c1001.begin()) {
        ESP_LOGE("C1001", "Sensor is not connected");
        }
    }

    void C1001::update() {
        float work_mode = c1001.getWorkMode();
        working_mode->publish_state(work_mode);
    }

    void C1001::loop() {

    }

    void C1001::dump_config() {
        ESP_LOGCONFIG(TAG, "Empty component");
    }
  };

}  // namespace fall_detector
}  // namespace esphome
