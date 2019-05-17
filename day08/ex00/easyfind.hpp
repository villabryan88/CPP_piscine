/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 21:52:36 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/10 14:25:28 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iterator>

template <typename T>
typename T::iterator   easyfind(T & con, int n){
    return (find(con.begin(), con.end(), n));
}