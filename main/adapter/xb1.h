#ifndef _XB1_H_
#define _XB1_H_
#include "adapter.h"

void xb1_to_generic(struct bt_data *bt_data, struct generic_ctrl *ctrl_data);
void xb1_fb_from_generic(struct generic_fb *fb_data, struct bt_data *bt_data);

#endif /* _XB1_H_ */
