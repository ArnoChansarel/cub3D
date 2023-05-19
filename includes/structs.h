/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:44:22 by achansar          #+#    #+#             */
/*   Updated: 2023/05/19 17:03:59 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

enum e_keys {
	ESC			= 53,
	UP			= 13,
	DOWN		= 1,
	LEFT		= 12,
	RIGHT		= 2,
	TURNL		= 123,
	TURNR		= 124
};

typedef struct s_digdifanalyser {
    double mapX;
    double mapY;
    double sideDistX;
    double sideDistY;
    double deltaDistX;
    double deltaDistY;
    int stepX;
    int stepY;
    int hit;
    int side;
}   t_digdifanalyzer;

typedef struct s_img {
	void	*img;
	char	*addr;
	int		bpp;
	int		szline;
	int		endian;
}	t_img;

typedef struct s_move {
	float moveSpeed;
	float rotSpeed;
	bool forward;
	bool back;
	bool turn;
	bool left;
	bool right;
	bool firstscreen;
}	t_move;

typedef struct s_rays {
    double cameraX;
    double rayPosX;
    double rayPosY;
    double rayDirX;
    double rayDirY;
}   t_rays;

typedef struct s_game {
	float	posX;
	float	posY;
	float	dirX;
	float	dirY;
	float	planeX;
	float	planeY;
	int		screenWidth;
	int		screenHeight;
	int		**worldMap;
	t_move	*move;
    t_rays  *rays;
}	t_game;

typedef struct s_data {
	void		*mlx;
	void		*win;
	t_img		img;
	t_game		*game;
}	t_data;