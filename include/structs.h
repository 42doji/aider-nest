<<<<<<< SEARCH
// include/structs.h
=======
// include/structs.h

typedef struct s_config {
    char    *north_texture;
    char    *south_texture;
    char    *east_texture;
    char    *west_texture;
    int     floor_color;
    int     ceiling_color;
    t_map   map;
} t_config;

typedef struct s_parser {
    t_config    config;
    int         has_north;
    int         has_south;
    int         has_east;
    int         has_west;
    int         has_floor;
    int         has_ceiling;
} t_parser;

typedef struct s_map {
    char    **grid;
    int     width;
    int     height;
} t_map;

// ... any existing content ...
>>>>>>> REPLACE
