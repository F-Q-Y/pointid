#include "def.hpp"

#ifndef _NAME_GLOBAL_VAR_
#define _NAME_GLOBAL_VAR_

//画布
extern Mat redraw;

//三角分割
extern Subdiv2D sub_div;

//表示对应的位置
extern E_locate LOCATE[6];

//记录当前相机的一些处理参数
extern src_param SP,SP_0;

//记录cluster信息
extern vector<Point> clusters;
extern vector<int> cluster_size;

//记录点到cluster对应关系
extern map<int,int> point2index;

#endif