/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/


#include "my.h"

void init_all(all_t *all)
{
    create_object_sky((sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0}, BG, all);
    create_object_ice((sfIntRect){0, 0, 1920, 1080},
    (sfVector2f){0, 0}, BG, all);
    create_object_perso((sfIntRect){0, 0, 216.37, 250},
    (sfVector2f){0, 0}, PLAYER, all);
    create_object_dust((sfIntRect){0, 0, 3840, 1080},
    (sfVector2f){0, 0}, BG, all);
    create_object_repose((sfIntRect){0, 0, 3840, 1080},
    (sfVector2f){0, -65}, BG, all);
    create_object_fond((sfIntRect){0, 0, 3840, 1080},
    (sfVector2f){0, 0}, BG, all);
    create_object_pause((sfIntRect){0, 0,  500, 500},
    (sfVector2f){480, 255}, PAUSE, all);
    create_text_two("0", all, (sfVector2f){862, 494}, (sfColor){84, 41, 10,
    255});
    create_object_persomenu((sfIntRect){0, 0, 220, 250},
    (sfVector2f){1600, 468}, MENU_PLAYER, all);
}

void event_key(all_t *all)
{
        if (all->window.event.type == sfEvtClosed)
            sfRenderWindow_close(all->window.window);
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue) {
            if (all->game == 1 && all->is_jumping == 0)
                sfMusic_play(all->jump_sound);
                all->is_jumping = 1;
        }
        if (sfKeyboard_isKeyPressed(sfKeyP) == sfTrue) {
            all->game = 0;
            all->pause = 1;
            all->object[6].display = 1;
        }
        if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
            all->game = 1;
            all->pause = 0;
            all->object[6].display = 0;
        }
}

void event_management(all_t *all)
{
    while (sfRenderWindow_pollEvent(all->window.window,
    &all->window.event))
        event_key(all);
}

window_t create_window(void)
{
    window_t window;
    sfVideoMode mode = {1920, 1080, 32};
    window.window = sfRenderWindow_create(mode, "My_Runner",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window.window, 120);
    return (window);
}

int main(int ac, char **av)
{
    all_t create_game;

    create_game = create_all(av);

    sfMusic_play(create_game.main_sound);
    main_menu(&create_game);
    if (create_game.determine_map == 3)
        my_map_draw(&create_game, av[1]);
    else
        my_map_draw(&create_game, av[2]);
    while (sfRenderWindow_isOpen(create_game.window.window))
        game(&create_game);
    destroy_all(&create_game);
    return (0);
}