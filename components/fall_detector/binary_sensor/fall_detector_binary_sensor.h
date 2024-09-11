#pragma once

#include "../fall_detector.h"
#include "esphome/core/component.h"
#include "esphome/components/binary_sensor/binary_sensor.h"

namespace esphome {
namespace c1001 {

class C1001BinarySensor : public binary_sensor::BinarySensor, public PollingComponent {
 public:
  void setup() override;
  void update() override;
  void dump_config() override;
};

} //namespace c1001
} //namespace esphome