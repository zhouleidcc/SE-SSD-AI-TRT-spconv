/*
 * SPDX-FileCopyrightText: Copyright (c) 2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef PARAMS_H_
#define PARAMS_H_
#define MAX_VOXELS 60000
#define MAX_POINTS 80000
#define MAX_POINTS_PER_VOXEL 5
#define THREADS_FOR_VOXEL 256 // threads number for a block
#define POINTS_PER_VOXEL 32 //depands on "params.h"


#define MAX_NUM_POINTS_PER_VOXEL 5
#define VOXEL_SIZE_X 0.05
#define VOXEL_SIZE_Y 0.05
#define VOXEL_SIZE_Z 0.1
#define X_MIN 0.0
#define X_MAX 70.4
#define Y_MIN -40.0
#define Y_MAX 40.0
#define Z_MIN -3.0
#define Z_MAX 1.0
#define VOXEL_FEATURE_NUM 4

//backbone
#define SUBM_0_MAX_VOXELS 60000
#define SUBM_0_IN_CHANNEL 4
#define SUBM_0_OUT_CHANNEL 16
#define SUBM_0_OUT_SHAPE_X 1408
#define SUBM_0_OUT_SHAPE_Y 1600
#define SUBM_0_OUT_SHAPE_Z 41


#define SUBM_3_MAX_VOXELS 60000
#define SUBM_3_IN_CHANNEL 16
#define SUBM_3_OUT_CHANNEL 16
#define SUBM_3_OUT_SHAPE_X 1408
#define SUBM_3_OUT_SHAPE_Y 1600
#define SUBM_3_OUT_SHAPE_Z 41

#define SPARSE_6_MAX_VOXELS 60000
#define SPARSE_6_IN_CHANNEL 16
#define SPARSE_6_OUT_CHANNEL 32
#define SPARSE_6_OUT_SHAPE_X 704
#define SPARSE_6_OUT_SHAPE_Y 800
#define SPARSE_6_OUT_SHAPE_Z 21
#define SPARSE_6_SPATIAL_SHAPE_X 1408 
#define SPARSE_6_SPATIAL_SHAPE_Y 1600
#define SPARSE_6_SPATIAL_SHAPE_Z 41
#define SPARSE_6_KSIZE_0 3
#define SPARSE_6_KSIZE_1 3
#define SPARSE_6_KSIZE_2 3
#define SPARSE_6_STRIDE_0 2
#define SPARSE_6_STRIDE_1 2
#define SPARSE_6_STRIDE_2 2
#define SPARSE_6_PADDING_0 1
#define SPARSE_6_PADDING_1 1
#define SPARSE_6_PADDING_2 1



#define SUBM_9_MAX_VOXELS 60000
#define SUBM_9_IN_CHANNEL 32
#define SUBM_9_OUT_CHANNEL 32
#define SUBM_9_OUT_SHAPE_X 704
#define SUBM_9_OUT_SHAPE_Y 800
#define SUBM_9_OUT_SHAPE_Z 21


#define SUBM_12_MAX_VOXELS 60000
#define SUBM_12_IN_CHANNEL 32
#define SUBM_12_OUT_CHANNEL 32
#define SUBM_12_OUT_SHAPE_X 704
#define SUBM_12_OUT_SHAPE_Y 800
#define SUBM_12_OUT_SHAPE_Z 21


#define SPARSE_15_MAX_VOXELS 60000
#define SPARSE_15_IN_CHANNEL 32
#define SPARSE_15_OUT_CHANNEL 64
#define SPARSE_15_OUT_SHAPE_X 352
#define SPARSE_15_OUT_SHAPE_Y 400
#define SPARSE_15_OUT_SHAPE_Z 11
#define SPARSE_15_SPATIAL_SHAPE_X 704 
#define SPARSE_15_SPATIAL_SHAPE_Y 800
#define SPARSE_15_SPATIAL_SHAPE_Z 21
#define SPARSE_15_KSIZE_0 3
#define SPARSE_15_KSIZE_1 3
#define SPARSE_15_KSIZE_2 3
#define SPARSE_15_STRIDE_0 2
#define SPARSE_15_STRIDE_1 2
#define SPARSE_15_STRIDE_2 2
#define SPARSE_15_PADDING_0 1
#define SPARSE_15_PADDING_1 1
#define SPARSE_15_PADDING_2 1


#define SUBM_18_MAX_VOXELS 60000
#define SUBM_18_IN_CHANNEL 64
#define SUBM_18_OUT_CHANNEL 64
#define SUBM_18_OUT_SHAPE_X 352
#define SUBM_18_OUT_SHAPE_Y 400
#define SUBM_18_OUT_SHAPE_Z 11

#define SUBM_21_MAX_VOXELS 60000
#define SUBM_21_IN_CHANNEL 64
#define SUBM_21_OUT_CHANNEL 64
#define SUBM_21_OUT_SHAPE_X 352
#define SUBM_21_OUT_SHAPE_Y 400
#define SUBM_21_OUT_SHAPE_Z 11

#define SUBM_24_MAX_VOXELS 60000
#define SUBM_24_IN_CHANNEL 64
#define SUBM_24_OUT_CHANNEL 64
#define SUBM_24_OUT_SHAPE_X 352
#define SUBM_24_OUT_SHAPE_Y 400
#define SUBM_24_OUT_SHAPE_Z 11


#define SPARSE_27_MAX_VOXELS 60000
#define SPARSE_27_IN_CHANNEL 64
#define SPARSE_27_OUT_CHANNEL 64
#define SPARSE_27_OUT_SHAPE_X 176
#define SPARSE_27_OUT_SHAPE_Y 200
#define SPARSE_27_OUT_SHAPE_Z 5
#define SPARSE_27_SPATIAL_SHAPE_X 352 
#define SPARSE_27_SPATIAL_SHAPE_Y 400
#define SPARSE_27_SPATIAL_SHAPE_Z 11
#define SPARSE_27_KSIZE_0 3
#define SPARSE_27_KSIZE_1 3
#define SPARSE_27_KSIZE_2 3
#define SPARSE_27_STRIDE_0 2
#define SPARSE_27_STRIDE_1 2
#define SPARSE_27_STRIDE_2 2
#define SPARSE_27_PADDING_0 0
#define SPARSE_27_PADDING_1 1
#define SPARSE_27_PADDING_2 1


#define SUBM_30_MAX_VOXELS 60000
#define SUBM_30_IN_CHANNEL 64
#define SUBM_30_OUT_CHANNEL 64
#define SUBM_30_OUT_SHAPE_X 176
#define SUBM_30_OUT_SHAPE_Y 200
#define SUBM_30_OUT_SHAPE_Z 5

#define SUBM_33_MAX_VOXELS 60000
#define SUBM_33_IN_CHANNEL 64
#define SUBM_33_OUT_CHANNEL 64
#define SUBM_33_OUT_SHAPE_X 176
#define SUBM_33_OUT_SHAPE_Y 200
#define SUBM_33_OUT_SHAPE_Z 5

#define SUBM_36_MAX_VOXELS 60000
#define SUBM_36_IN_CHANNEL 64
#define SUBM_36_OUT_CHANNEL 64
#define SUBM_36_OUT_SHAPE_X 176
#define SUBM_36_OUT_SHAPE_Y 200
#define SUBM_36_OUT_SHAPE_Z 5


#define SPARSE_39_MAX_VOXELS 60000
#define SPARSE_39_IN_CHANNEL 64
#define SPARSE_39_OUT_CHANNEL 64
#define SPARSE_39_OUT_SHAPE_X 176
#define SPARSE_39_OUT_SHAPE_Y 200
#define SPARSE_39_OUT_SHAPE_Z 2
#define SPARSE_39_SPATIAL_SHAPE_X 176 
#define SPARSE_39_SPATIAL_SHAPE_Y 200
#define SPARSE_39_SPATIAL_SHAPE_Z 5
#define SPARSE_39_KSIZE_0 3
#define SPARSE_39_KSIZE_1 1
#define SPARSE_39_KSIZE_2 1
#define SPARSE_39_STRIDE_0 2
#define SPARSE_39_STRIDE_1 1
#define SPARSE_39_STRIDE_2 1
#define SPARSE_39_PADDING_0 0
#define SPARSE_39_PADDING_1 0
#define SPARSE_39_PADDING_2 0

#define BACKBONE_FEATURE_MAP_SIZE_X 176
#define BACKBONE_FEATURE_MAP_SIZE_Y 200
#define BACKBONE_FEATURE_MAP_SIZE_Z 2
#define BACKBONE_FEATURE_MAP_CHANNEL 64


#define ZERO_PADDING_2D_TOP  1
#define ZERO_PADDING_2D_BOTTOM  1
#define ZERO_PADDING_2D_LEFT  1
#define ZERO_PADDING_2D_RIGHT  1

//neck
#define BOTTOM_UP_BLOCK_0_CONV_0_IN_CHANNEL 128
#define BOTTOM_UP_BLOCK_0_CONV_0_OUT_CHANNEL 128
#define BOTTOM_UP_BLOCK_0_CONV_0_KSIZE 3
#define BOTTOM_UP_BLOCK_0_CONV_0_STRIDE 1
#define BOTTOM_UP_BLOCK_0_CONV_0_PADDING 0
#define BOTTOM_UP_BLOCK_0_BATCHNORM2D_0_NUM_FEATURES 128

#define BOTTOM_UP_BLOCK_0_CONV_1_IN_CHANNEL 128
#define BOTTOM_UP_BLOCK_0_CONV_1_OUT_CHANNEL 128
#define BOTTOM_UP_BLOCK_0_CONV_1_KSIZE 3
#define BOTTOM_UP_BLOCK_0_CONV_1_STRIDE 1
#define BOTTOM_UP_BLOCK_0_CONV_1_PADDING 1
#define BOTTOM_UP_BLOCK_0_BATCHNORM2D_1_NUM_FEATURES 128

#define BOTTOM_UP_BLOCK_0_CONV_2_IN_CHANNEL 128
#define BOTTOM_UP_BLOCK_0_CONV_2_OUT_CHANNEL 128
#define BOTTOM_UP_BLOCK_0_CONV_2_KSIZE 3
#define BOTTOM_UP_BLOCK_0_CONV_2_STRIDE 1
#define BOTTOM_UP_BLOCK_0_CONV_2_PADDING 1
#define BOTTOM_UP_BLOCK_0_BATCHNORM2D_2_NUM_FEATURES 128


#define BOTTOM_UP_BLOCK_1_CONV_0_IN_CHANNEL 128
#define BOTTOM_UP_BLOCK_1_CONV_0_OUT_CHANNEL 256
#define BOTTOM_UP_BLOCK_1_CONV_0_KSIZE 3
#define BOTTOM_UP_BLOCK_1_CONV_0_STRIDE 2
#define BOTTOM_UP_BLOCK_1_CONV_0_PADDING 1
#define BOTTOM_UP_BLOCK_1_BATCHNORM2D_0_NUM_FEATURES 256

#define BOTTOM_UP_BLOCK_1_CONV_1_IN_CHANNEL 256
#define BOTTOM_UP_BLOCK_1_CONV_1_OUT_CHANNEL 256
#define BOTTOM_UP_BLOCK_1_CONV_1_KSIZE 3
#define BOTTOM_UP_BLOCK_1_CONV_1_STRIDE 1
#define BOTTOM_UP_BLOCK_1_CONV_1_PADDING 1
#define BOTTOM_UP_BLOCK_1_BATCHNORM2D_1_NUM_FEATURES 256

#define BOTTOM_UP_BLOCK_1_CONV_2_IN_CHANNEL 256
#define BOTTOM_UP_BLOCK_1_CONV_2_OUT_CHANNEL 256
#define BOTTOM_UP_BLOCK_1_CONV_2_KSIZE 3
#define BOTTOM_UP_BLOCK_1_CONV_2_STRIDE 1
#define BOTTOM_UP_BLOCK_1_CONV_2_PADDING 1
#define BOTTOM_UP_BLOCK_1_BATCHNORM2D_2_NUM_FEATURES 256



#define TRANS_0_CONV_IN_CHANNEL 128
#define TRANS_0_CONV_OUT_CHANNEL 128
#define TRANS_0_CONV_KSIZE 1
#define TRANS_0_CONV_STRIDE 1
#define TRANS_0_CONV_PADDING 0
#define TRANS_0_BATCHNORM2D_NUM_FEATURES 128


#define TRANS_1_CONV_IN_CHANNEL 256
#define TRANS_1_CONV_OUT_CHANNEL 256
#define TRANS_1_CONV_KSIZE 1
#define TRANS_1_CONV_STRIDE 1
#define TRANS_1_CONV_PADDING 0
#define TRANS_1_BATCHNORM2D_NUM_FEATURES 256


#define DECONV_BLOCK_0_CONV_IN_CHANNEL 256
#define DECONV_BLOCK_0_CONV_OUT_CHANNEL 128
#define DECONV_BLOCK_0_CONV_KSIZE 3
#define DECONV_BLOCK_0_CONV_STRIDE 2
#define DECONV_BLOCK_0_CONV_PADDING 1
#define DECONV_BLOCK_0_CONV_OUT_PADDING 1
#define DECONV_BLOCK_0_BATCHNORM2D_NUM_FEATURES 128


#define DECONV_BLOCK_1_CONV_IN_CHANNEL 256
#define DECONV_BLOCK_1_CONV_OUT_CHANNEL 128
#define DECONV_BLOCK_1_CONV_KSIZE 3
#define DECONV_BLOCK_1_CONV_STRIDE 2
#define DECONV_BLOCK_1_CONV_PADDING 1
#define DECONV_BLOCK_1_CONV_OUT_PADDING 1
#define DECONV_BLOCK_1_BATCHNORM2D_NUM_FEATURES 128


#define CONV_0_CONV_IN_CHANNEL 128
#define CONV_0_CONV_OUT_CHANNEL 128
#define CONV_0_CONV_KSIZE 3
#define CONV_0_CONV_STRIDE 1
#define CONV_0_CONV_PADDING 1
#define CONV_0_BATCHNORM2D_NUM_FEATURES 128


#define W_0_CONV_IN_CHANNEL 128
#define W_0_CONV_OUT_CHANNEL 1
#define W_0_CONV_KSIZE 1
#define W_0_CONV_STRIDE 1
#define W_0_CONV_PADDING 0
#define W_0_BATCHNORM2D_NUM_FEATURES 1


#define CONV_1_CONV_IN_CHANNEL 128
#define CONV_1_CONV_OUT_CHANNEL 128
#define CONV_1_CONV_KSIZE 3
#define CONV_1_CONV_STRIDE 1
#define CONV_1_CONV_PADDING 1
#define CONV_1_BATCHNORM2D_NUM_FEATURES 128


#define W_1_CONV_IN_CHANNEL 128
#define W_1_CONV_OUT_CHANNEL 1
#define W_1_CONV_KSIZE 1
#define W_1_CONV_STRIDE 1
#define W_1_CONV_PADDING 0
#define W_1_BATCHNORM2D_NUM_FEATURES 1

#define X_WEIGHT_0_HEIGHT 200
#define X_WEIGHT_0_WIDTH 176
#define X_WEIGHT_0_CHANNEL 128

#define X_WEIGHT_0_HEIGHT 200
#define X_WEIGHT_0_WIDTH 176
#define X_WEIGHT_0_CHANNEL 128

//head
#define CONV_BOX_IN_CHANNEL 128
#define CONV_BOX_OUT_CHANNEL 14
#define CONV_BOX_KSIZE 1
#define CONV_BOX_STRIDE 1
#define CONV_BOX_PADDING 0
#define CONV_BOX_DIM_NUM 7


#define CONV_CLS_IN_CHANNEL 128
#define CONV_CLS_OUT_CHANNEL 2
#define CONV_CLS_KSIZE 1
#define CONV_CLS_STRIDE 1
#define CONV_CLS_PADDING 0
#define CONV_CLS_DIM_NUM 1


#define CONV_IOU_IN_CHANNEL 128
#define CONV_IOU_OUT_CHANNEL 2
#define CONV_IOU_KSIZE 1
#define CONV_IOU_STRIDE 1
#define CONV_IOU_PADDING 0
#define CONV_IOU_DIM_NUM 1


#define CONV_DIR_IN_CHANNEL 128
#define CONV_DIR_OUT_CHANNEL 4
#define CONV_DIR_KSIZE 1
#define CONV_DIR_STRIDE 1
#define CONV_DIR_PADDING 0
#define CONV_DIR_DIM_NUM 2


#define FEATURE_MAP_HEIGHT 200
#define FEATURE_MAP_WIDTH 176
#define DIRECTION_ANGLE_0 0.0
#define DIRECTION_ANGLE_1 1.57
#define CAR_LENGTH 3.9
#define CAR_WIDTH 1.6
#define CAR_HEIGHT 1.56
#define DIRECTION_ANGLE_NUM 2

#define MAX_BOX_NUM 500
#define SCORE_THRESHOLD 0.45 //0.3
#define DIRECTION_OFFSET 0.0


#define USE_FP16// comment out this if want to use FP32
#define DEVICE 0  // GPU id
#define NMS_THRESH 0.01
#define LAST_DIMS 9

#endif
