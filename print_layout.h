/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_layout.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 00:31:32 by nguiard           #+#    #+#             */
/*   Updated: 2022/01/05 02:32:42 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_LAYOUT_H
# define PRINT_LAYOUT_H

# include <unistd.h>

# define C_BLACK_CODE "30m"
# define C_RED_CODE "31m"
# define C_GREEN_CODE "32m"
# define C_YELLOW_CODE "33m"
# define C_BLUE_CODE "34m"
# define C_MAGENTA_CODE "35m"
# define C_CYAN_CODE "36m"
# define C_WHITE_CODE "37m"

# define C_BOLD_CODE "1"
# define C_FADED_CODE "2"
# define C_ITALIC_CODE "3"
# define C_UNDERLINE_CODE "4"
# define C_BLINK_CODE "5"
# define C_REVERSE_CODE "7"
# define C_HIDE_CODE "8"
# define C_CROSSED_CODE "9"

# define C_BOLD 1
# define C_FADED 2
# define C_ITALIC 3
# define C_UNDERLINE 4
# define C_BLINK 5
# define C_REVERSE 7
# define C_HIDE 8
# define C_CROSSED 9

# define C_BLACK 0
# define C_RED 1
# define C_GREEN 2
# define C_YELLOW 3
# define C_BLUE 4
# define C_MAGENTA 5
# define C_CYAN 6
# define C_WHITE 7

# define C_BASE "\033[0;"
# define C_BG "48;5;"
# define C_FG "38;5;"

#endif
