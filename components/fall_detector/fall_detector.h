#pragma once

//#include "esphome.h"
#include "esphome/core/component.h"
#include "esphome/components/uart.h"
// #include "DFRobot_HumanDetection.h"

namespace esphome {
namespace fall_detector {

class C1001 : public uart::UARTDevice, public Component {
 public:
//  DFRobot_HumanDetection c1001;
//  Sensor *working_mode = new Sensor();

  void setup() override;
//  void update() override;
  void loop() override;
  void dump_config() override;
};


}  // namespace fall_detector
}  // namespace esphome

