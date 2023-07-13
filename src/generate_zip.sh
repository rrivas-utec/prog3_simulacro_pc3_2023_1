#!/usr/bin/env bash

project_name='prog3_simulacro_pc3_2023_1'
source_code='
  nearest_spheres.h
  remove_characters.h
  binary_search_tree.h
  grafo.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}