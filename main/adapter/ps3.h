#ifndef _PS3_H_
#define _PS3_H_
#include "adapter.h"

void ps3_to_generic(struct bt_data *bt_data, struct generic_ctrl *ctrl_data);
void ps3_fb_from_generic(struct generic_fb *fb_data, struct bt_data *bt_data);

#endif /* _PS3_H_ */
