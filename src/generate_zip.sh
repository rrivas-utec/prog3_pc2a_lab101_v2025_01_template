#!/usr/bin/env bash

project_name='prog3_pc2a_lab101_v2025_01'
source_code='
  fused_transform_reduce.h
  zip_apply_filter.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}