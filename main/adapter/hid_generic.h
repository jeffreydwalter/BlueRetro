#ifndef _HID_GENERIC_H_
#define _HID_GENERIC_H_
#include "adapter.h"

void hid_to_generic(struct bt_data *bt_data, struct generic_ctrl *ctrl_data);
void hid_fb_from_generic(struct generic_fb *fb_data, struct bt_data *bt_data);

#endif /* _HID_GENERIC_H_ */
