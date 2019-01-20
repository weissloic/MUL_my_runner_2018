/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/



#include "my.h"

void win_function(all_t *all)
{
    if (all->win_game == 1 && all->lose_game != 1) {
        all->game = 0;
        create_object_victory(
        (sfIntRect){0, 0, 1920, 1080}, (sfVector2f){0,
        0}, BG, all);
    }
    if (all->lose_game == 1) {
        all->game = 0;
        create_object_lose(
        (sfIntRect){0, 0, 1920, 1080}, (sfVector2f){0,
        0}, BG, all);
    }
}

int check_jump(all_t *all)
{
    int jump = 0;

    if (all->object[2].position.y  > 652)
        jump = 1;
    return (jump);
}

void game(all_t *all)
{
    event_management(all);
    conevrt_intchar(all->score, all->text[0].str);
    sfText_setString(all->text[0].text, all->text[0].str);
    manage_game(all);
    display(*all);
    display_text(*all);
    sfRenderWindow_display(all->window.window);

}

void create_object_pic(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.pic1;
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