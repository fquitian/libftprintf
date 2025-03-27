/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquitian <fquitian@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:49:29 by fquitian          #+#    #+#             */
/*   Updated: 2025/03/27 10:49:33 by fquitian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
    ft_printf("Hola %s!\n", "mundo");
    ft_printf("Número: %d, Hex: %x, Puntero: %p\n", 42, 255, &main);
    return (0);
}
