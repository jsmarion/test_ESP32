#include "esphome.h"
#include "DFRobot_HumanDetection.h"

class C1001 : public PollingComponent {
 public:
  DFRobot_HumanDetection c1001;
  Sensor *working_mode = new Sensor();

  C1001() : PollingComponent(5000) { }

  void setup() override {
    if(!c1001.begin()) {
      ESP_LOGE("C1001", "Sensor is not connected");
    }
  }

  void update() override {
    float work_mode = c1001.getWorkMode();
    working_mode->publish_state(work_mode);
  }
};