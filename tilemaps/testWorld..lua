return {
  version = "1.1",
  luaversion = "5.1",
  tiledversion = "1.1.6",
  orientation = "orthogonal",
  renderorder = "right-down",
  width = 30,
  height = 30,
  tilewidth = 16,
  tileheight = 16,
  nextobjectid = 1,
  properties = {},
  tilesets = {
    {
      name = "overworld",
      firstgid = 1,
      filename = "overworld.tsx",
      tilewidth = 16,
      tileheight = 16,
      spacing = 0,
      margin = 0,
      image = "../img/overworld.png",
      imagewidth = 144,
      imageheight = 144,
      tileoffset = {
        x = 0,
        y = 0
      },
      grid = {
        orientation = "orthogonal",
        width = 16,
        height = 16
      },
      properties = {},
      terrains = {},
      tilecount = 81,
      tiles = {}
    }
  },
  layers = {
    {
      type = "tilelayer",
      name = "Tile Layer 1",
      x = 0,
      y = 0,
      width = 30,
      height = 30,
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      properties = {},
      encoding = "lua",
      data = {
        22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 48, 49, 48, 49, 48, 49, 48, 49,
        22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 48, 49, 22, 22, 22, 57, 58, 57, 58, 57, 58, 57, 58,
        22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 5, 22, 22, 22, 14, 22, 22, 57, 58, 22, 22, 22, 5, 15, 6, 5, 14, 6, 22, 22,
        22, 22, 5, 22, 22, 22, 22, 14, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 6, 5, 5, 5, 14, 15, 22, 22,
        22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 15, 6, 6, 15, 5, 6, 22, 22,
        22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 14, 22, 22, 22, 22, 22, 22, 14, 6, 5, 6, 15, 5, 22, 22,
        22, 22, 22, 14, 22, 22, 22, 22, 5, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 14, 22, 22, 22, 22, 5, 14, 15, 22, 22, 22,
        22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
        22, 22, 6, 22, 22, 22, 22, 22, 22, 5, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
        22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 5, 22, 22, 22, 22, 22, 22, 5, 22, 22, 22, 22, 22, 22, 22, 22,
        22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 14, 22, 22, 22, 22, 22, 22, 22,
        22, 22, 22, 39, 22, 22, 22, 14, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 14, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
        22, 19, 19, 39, 22, 6, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 48, 49, 22, 22, 22, 22, 22, 22, 22,
        22, 19, 19, 19, 22, 22, 22, 22, 22, 22, 22, 22, 5, 22, 22, 22, 22, 22, 22, 22, 22, 57, 58, 22, 22, 6, 22, 22, 22, 22,
        22, 38, 37, 40, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
        22, 38, 46, 40, 22, 22, 22, 22, 22, 22, 22, 22, 15, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
        22, 38, 55, 40, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 5, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
        22, 22, 22, 5, 22, 22, 5, 22, 22, 22, 22, 22, 22, 22, 5, 22, 22, 22, 22, 22, 22, 22, 5, 22, 22, 22, 59, 60, 60, 61,
        22, 22, 22, 22, 22, 22, 22, 22, 15, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 59, 60, 60, 60, 60, 63, 10, 10, 70,
        22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 59, 60, 60, 63, 10, 10, 10, 10, 10, 10, 13, 62,
        22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 5, 22, 22, 22, 68, 10, 10, 10, 10, 10, 31, 10, 10, 10, 10, 10,
        19, 19, 21, 20, 19, 19, 19, 21, 20, 22, 22, 22, 22, 22, 22, 22, 59, 60, 63, 10, 13, 10, 10, 10, 10, 10, 10, 10, 10, 10,
        19, 21, 20, 19, 21, 20, 20, 20, 21, 22, 22, 22, 22, 22, 22, 22, 68, 11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 32, 33,
        19, 19, 20, 7, 8, 9, 20, 20, 20, 22, 22, 22, 22, 22, 22, 59, 63, 10, 10, 10, 10, 10, 10, 10, 10, 10, 32, 33, 45, 30,
        21, 7, 8, 16, 47, 18, 9, 19, 21, 22, 22, 22, 22, 22, 22, 68, 10, 10, 10, 10, 10, 11, 10, 10, 10, 10, 41, 30, 29, 29,
        20, 25, 26, 16, 56, 18, 27, 20, 20, 22, 22, 5, 22, 22, 22, 68, 11, 10, 10, 10, 10, 10, 10, 12, 10, 10, 41, 29, 30, 30,
        19, 19, 19, 25, 26, 27, 19, 19, 20, 22, 22, 22, 22, 22, 22, 77, 54, 10, 10, 10, 10, 10, 10, 10, 10, 10, 50, 51, 36, 29,
        20, 21, 19, 20, 20, 20, 19, 20, 20, 22, 22, 22, 22, 22, 22, 22, 77, 78, 78, 78, 78, 78, 54, 10, 10, 10, 10, 10, 50, 51,
        19, 20, 20, 20, 21, 20, 20, 19, 21, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 77, 54, 10, 10, 10, 10, 10, 10,
        20, 21, 20, 19, 20, 19, 20, 20, 20, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 68, 11, 10, 10, 10, 10, 10
      }
    }
  }
}
