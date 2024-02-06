/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_errors.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:03:58 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/02/05 12:18:56 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_ERRORS_H
# define CUB3D_ERRORS_H

// ERROR MESSAGES
// ==============
# define ERR_ARGS		(char *)"\aInvalid number of arguments!\n\
 > Program usage: ./cub3D [path_to_file.cub]\n"
# define ERR_PRNT		(char *)"\aSomething went wrong while doing a print!\n"
# define ERR_MEM		(char *)"\aSomething went wrong while allocating memory!\n"
# define ERR_WIN		(char *)"\aSomething went wrong while opening a window!\n"
# define ERR_OPEN_MAP	(char *)"\aMap could not be opened!\n"
# define ERR_READ_MAP	(char *)"\aMap could not be read!\n"
# define ERR_CLOSE_MAP	(char *)"\aMap could not be closed!\n"
# define ERR_EXT_MAP	(char *)"\aMap extension is invalid!\n"
# define ERR_DUP_MAP	(char *)"\aMap is duplicated!\n"
# define ERR_BAD_MAP	(char *)"\aMap is invalid!\n"
# define ERR_DUP_TEX	(char *)"\aMap texture is duplicated!\n"
# define ERR_BAD_TEX	(char *)"\aMap texture is invalid!\n"
# define ERR_TEX		(char *)"\aA map texture was found missing!\n"
# define ERR_DUP_CLR	(char *)"\aMap colour is duplicated!\n"
# define ERR_BAD_CLR	(char *)"\aMap colour is invalid!\n"
# define ERR_CLR		(char *)"\aA map colour was found missing!\n"
# define ERR_IMG		(char *)"\aA map image was found missing or invalid!\n"
# define ERR_INV_DTA	(char *)"\aInvalid data found while parsing map!\n"
# define ERR_EXP_MAP	(char *)"\aMap expansion have gone wrong at some point!\n"
# define ERR_HDR_MIS    (char *)"\aThe header is incomplete or does not exist!\n"
# define ERR_HDR_DUP    (char *)"\aThe content of the header is duplicated!\n"

// ERROR CODES
// ===========
# define SYS_ARGS		(int)1
# define SYS_PRNT		(int)2
# define SYS_MEM		(int)3
# define SYS_WIN		(int)4
# define SYS_OPEN_MAP	(int)5
# define SYS_READ_MAP	(int)6
# define SYS_CLOSE_MAP	(int)7
# define SYS_EXT_MAP	(int)8
# define SYS_DUP_MAP	(int)9
# define SYS_BAD_MAP	(int)10
# define SYS_DUP_TEX	(int)11
# define SYS_BAD_TEX	(int)12
# define SYS_TEX		(int)13
# define SYS_DUP_CLR	(int)14
# define SYS_BAD_CLR	(int)15
# define SYS_CLR		(int)16
# define SYS_IMG		(int)17
# define SYS_INV_DTA	(int)18
# define SYS_EXP_MAP	(int)19
# define SYS_HDR_MIS    (int)20
# define SYS_HDR_DUP    (int)21

int		print_error(const char *str, int syserr);
void	terminate_error(const char *str, int syserr);

#endif