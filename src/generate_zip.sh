#!/usr/bin/env bash

project_name='prog3_simulacro_pc3_2023_1'
source_code='
        P1.h P1.cpp
        P2.h P2.cpp
        P3.h P3.cpp
        P4.h P4.cpp
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}