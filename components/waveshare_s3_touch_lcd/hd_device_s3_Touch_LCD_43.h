#pragma once

#define ESP_PANEL_CONF_INCLUDE_SIMPLE

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
    uint8_t get_brightness();
    void set_brightness(uint8_t value);
private:
    unsigned long time_ = 0;
    uint8_t brightness_ = 0;
};

}  // namespace hd_device
}  // namespace esphome