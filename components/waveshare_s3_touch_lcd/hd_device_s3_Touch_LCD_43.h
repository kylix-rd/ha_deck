#pragma once

#include "esphome/core/component.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"
#include "ESP_Panel.h"
#include "lvgl.h"

LV_IMG_DECLARE(bg_480x320);

#define TFT_WIDTH 800
#define TFT_HEIGHT 480


namespace esphome {
namespace hd_device {

class HaDeckDevice : public Component
{
public:
    void setup() override;
    void loop() override;
    float get_setup_priority() const override;
private:
    unsigned long time_ = 0;
};

}  // namespace hd_device
}  // namespace esphome