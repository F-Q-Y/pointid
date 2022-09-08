#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

#ifndef _NAME_DEF_
#define _NAME_DEF_

#define RIGHT 0
#define UP 1
#define LEFT 2
#define DOWN 3

typedef int EdgeID;
typedef Vec4f Edge;
typedef pair<int,float> SN;

enum E_locate{
    e_AB,
    e_AD,
    e_CB,
    e_CD,
    e_AC,
    e_DB
};

struct src_param{
    string url;
    float row;
    float col;
    float resolution;
    float Amax;
    float Amin;
    float div;
    int n_kp;
    float d_cl;
    int n_cl;
    float LSE;
    float thet_par;
    float thet_ver;
    int max_edge_id;
    int cluster_side;
};

#endif