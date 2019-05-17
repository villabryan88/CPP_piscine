/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 13:59:54 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
	std::cout << "melee attack at " << target << std::endl;
}
void Human::rangedAttack(std::string const & target){
	std::cout << "ranged attack at " << target << std::endl;
}
void Human::intimidatingShout(std::string const & target){
	std::cout << "intimidating shout at " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target){
	std::string action_names[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	void (Human::*actions[])(std::string const &) = {
			&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout
			};
	
	for(int i = 0;i < 3; i++)
	{
		if(action_names[i] == action_name)
		{
			(this->*actions[i])(target);
		}
	}

}
