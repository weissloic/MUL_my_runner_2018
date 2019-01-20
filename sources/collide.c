/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "my.h"

void obstacle_collide(all_t *all)
{
    int i = 0;
    int y = 0;
    for (; i < all->nb_object; i++) {
        if ((all->object[2].position.x + 120 > all->object[i].position.x
        && all->object[2].position.x < all->object[i].position.x + 120)
        && ( all->object[i].type == ENEMY)) {
            if (all->object[2].position.y + 120 >
            all->object[i].position.y &&
            (all->object[2].position.y < all->object[i].position.y + 120))
                all->lose_game = 1;
        }
    }
    for (; y < all->nb_object; y++) {
        if (all->object[y].type == END && (all->object[y].position.x
            < all->object[2].position.x))
            all->win_game = 1;
    }
}

void create_object_poule(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.poule;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 0;
    obj.size_max = 0;
    obj.type = type;
    obj.display = 1;
    if (obj.type == PAUSE)
        obj.display = 0;
    sfSprite_setTexture(obj.sprite, obj.texture, sfTrue);
    sfSprite_setTextureRect(obj.sprite, obj.rect);
    sfSprite_setPosition(obj.sprite, obj.position);
    all->object[all->nb_object] = obj;
    all->object[2].position.y = 652;
    all->nb_object++;
}

all_t init_all_var(char *av)
{
    all_t all;
    all.score = 0;
    all.nb_object = 0;
    all.is_jumping = 0;
    all.time_elapsed = 0;
    all.mm = 1;
    all.mm_option = 1;
    all.main_menu = 1;
    all.manage_jump = -1;
    all.lose_game = 0;
    all.win_game = 0;
    all.game = 0;
    all.vertical_move = 0;
    all.pause = 0;
    all.nb_text = 0;
    all.option_menu = 0;
    return (all);
}

all_t create_all(char *av)
{
    all_t all = init_all_var(av);
    all.text = malloc(sizeof(text_t) * 1);
    all.main_sound = sfMusic_createFromFile("son/gilets.ogg");
    all.jump_sound = sfMusic_createFromFile("son/saut.ogg");
    all.map = open_file(av);
    all.object = malloc(sizeof(object_t) *  20);
    all.all_texture = create_all_textures();
    all.window = create_window();
    all.clock.clocks = sfClock_create();

    init_all(&all);
    return (all);
}