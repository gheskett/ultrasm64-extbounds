const GeoLayout mario_ref_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_JUMP_TO_EXISTING_GRAPH_NODE(MODEL_UNSAFE_MARIO),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout marios_cap_ref_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_JUMP_TO_EXISTING_GRAPH_NODE(MODEL_UNSAFE_MARIOS_CAP),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout marios_metal_cap_ref_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_JUMP_TO_EXISTING_GRAPH_NODE(MODEL_UNSAFE_MARIOS_METAL_CAP),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout marios_wing_cap_ref_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_JUMP_TO_EXISTING_GRAPH_NODE(MODEL_UNSAFE_MARIOS_WING_CAP),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
