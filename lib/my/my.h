/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** [file description here]
*/


#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>

#include <time.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <math.h>
#include <sys/stat.h>

typedef struct text_s
{
    sfFont *font;
    sfText *text;
    char *str;
    sfVector2f position;
}   text_t;


typedef enum type_s
{
    PLAYER, BG, ENEMY, END, PAUSE, MENU_PLAYER
}   type_t;

typedef struct object_s
{
    type_t type;
    sfVector2f position;
    int display;
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    int offset;
    int size_max;
    float number;
}   object_t;

typedef struct all_texture_s
{
    sfTexture *pic1;
    sfTexture *poule;
    sfTexture *end;
    sfTexture *ciel;
    sfTexture *fond;
    sfTexture *repose;
    sfTexture *dust;
    sfTexture *ice;
    sfTexture *perso;
    sfTexture *pause;
    sfTexture *victoire;
    sfTexture *defaite;
    sfTexture *planet;
    sfTexture *perso_menu;
    sfTexture *mm1;
    sfIntRect rect_mm1;
    sfIntRect rect_mm2;
    sfIntRect rect_menupers;
    sfTexture *mm2;
    sfTexture *men;
    sfVector2f pos_carre;
    sfVector2f pos_menu;
    sfVector2f pos_planet;
    sfVector2f pos_fleche;
    sfVector2f pos_fleche_invert;
    sfSprite *test;
    sfSprite *planet_fix;
    sfSprite *sprite_perso_menu;
    sfTexture *planet_fond;
    sfSprite *sprite_planet_fond;
    sfTexture *earth_fond;
    sfSprite *sprite_earth_fond;
    sfTexture *text_astrorunner;
    sfSprite *sprite_text_astrorunner;
    sfTexture *text_game;
    sfSprite *sprite_text_game;
    sfTexture *fleche_texture;
    sfSprite *fleche_menu_option;
    sfTexture *fleche_texture_invert;
    sfSprite *fleche_menu_option_invert;
}   all_texture_t;

typedef struct window_s
{
    sfEvent event;
    sfRenderWindow *window;
    sfVideoMode mode;
}   window_t;

typedef struct clock_ss
{
    sfTime time;
    sfClock *clocks;
    float seconds;
}   clock_tt;

typedef struct clock_menu_ss
{
    sfTime time;
    sfClock *clocks;
    float seconds;
}   clock_menu_tt;


typedef struct all_s
{
    object_t *object;
    text_t *text;
    all_texture_t all_texture;
    clock_tt clock;
    clock_menu_tt clock_menu;
    sfMusic *main_sound;
    sfMusic *jump_sound;
    window_t window;
    int is_jumping;
    int nb_object;
    int nb_text;
    char *map;
    int manage_jump;
    float vertical_move;
    int lose_game;
    int win_game;
    int game;
    int score;
    int pause;
    int time_elapsed;
    int mm;
    int main_menu;
    int option_menu;
    int mm_option;
    int determine_sprite;
    int determine_map;
}   all_t;

typedef struct init_map_s
{
    int **map2d;
    char *map;
    int **second_map2d;
    char *file;
    char *buffer;
    int fd;
    int ret;
} init_map_t;
window_t create_window(void);
void conevrt_intchar(int nb, char *str);
int len_line(char *map);
void my_putchar(char c);
void my_putstr(char *str);
int my_strlen2(char const *str);
char *my_revstr(char *str);
char *my_strcat(char *s1, char *s2);
int my_strlen(char *str);
int my_strncmpr(char *s1, char *s2, int n);
char *open_file(char *path);
void win_function(all_t *all);
int check_jump(all_t *all);
void game(all_t *all);
void create_object_pic(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
void obstacle_collide(all_t *all);
void create_object_poule(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
all_t init_all_var(char *av);
all_t create_all(char *av);
void create_object_pause(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
void create_object_persomenu(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
void create_object_end(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
void create_object_victory(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
void create_object_lose(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
all_texture_t create_all_texturesone(void);
all_texture_t create_all_textures1(void);
all_texture_t create_all_textures2(void);
all_texture_t create_all_textures(void);
void function_text(text_t txt, char *str,
sfVector2f position, sfColor color);
void create_text_two(char *str, all_t *all,
sfVector2f position, sfColor color);
void create_object_sky(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
void create_object_ice(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
void create_object_perso(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
void option_menu_three(all_t *all, sfSprite *sprite_menu,
sfSprite *select_menu);
void option_menu_four(all_t *all, sfSprite *sprite_menu, sfSprite *select_menu);
void option_menu_ttwo(all_t *all, sfSprite *sprite_menu, sfSprite *select_menu);
void option_menu(all_t *all, sfSprite *sprite_menu, sfSprite *select_menu);
void display_menu(all_t *all, sfSprite *sprite_menu);
void create_object_dust(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
void create_object_repose(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
void create_object_fond(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all);
void map_generate(int **map, int i, int j, all_t *all);
void sprite_option_menu(all_t *all);
void adding_two(all_t *all);
void menu_adding_option(all_t *all);
void destroy_all(all_t *all);
void display_two(all_t all);
void menu_adding_two(all_t *all);
void display(all_t all);
void display_text(all_t all);
void game_engine_core(all_t *all);
void game_engine_core_two(all_t *all);
void clock_two(all_t *all);
void manage_game(all_t *all);
void first_clock_game_engine(all_t *all);
void move_rect_player(all_t *all, int i);
void move_rect_player_two(all_t *all, int i);
void move_rect_two(all_t *all, type_t type);
void move_rect(all_t *all, type_t type);
void clock_one (all_t *all);
void jump_norm(all_t *all);
void jump_two(all_t *all);
void jump(all_t *all);
void jump_gestion(all_t *all);
void set_position(all_t *all);
void choice_main_menu_two(all_t *all);
void choice_main_menu(all_t *all);
void event_main_menu(all_t *all);
void main_menu(all_t *all);
void add_texture(all_t *all);
void menu_adding(all_t *all);
void init_menu(all_t *all);
void option_menu_one(all_t *all, sfSprite *sprite_menu, sfSprite *select_menu);
void option_menu_two(all_t *all, sfSprite *sprite_menu, sfSprite *select_menu);
int **convert_int_map(char *test);
void my_map_draw(all_t *all, char *av);
void option_four_norm(all_t *all,
sfSprite *sprite_option, sfSprite *select_menu);
void option_four(all_t *all, sfSprite *sprite_option, sfSprite *select_menu);
void init_option_menu(all_t *all);
void event_option_two(all_t *all, sfSprite *sprite_option,
sfSprite *select_menu);
void option_one(all_t *all, sfSprite *sprite_option, sfSprite *select_menu);
void option_two_norm(all_t *all, sfSprite *sprite_option,
sfSprite *select_menu);
void option_two(all_t *all, sfSprite *sprite_option, sfSprite *select_menu);
void option_three_norm(all_t *all, sfSprite *sprite_option,
sfSprite *select_menu);
void option_three(all_t *all, sfSprite *sprite_option, sfSprite *select_menu);
void event_option(all_t *all, sfSprite *sprite_option, sfSprite *select_menu);
void display_menu_option(all_t *all, sfSprite *sprite_option);
void choice_main_menu_option_two(all_t *all);
void choice_main_menu_option(all_t *all);
void event_main_menu_option(all_t *all);

#endif