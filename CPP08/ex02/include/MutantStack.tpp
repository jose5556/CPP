/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:23:29 by cereais           #+#    #+#             */
/*   Updated: 2025/07/24 18:09:31 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T, typename ContainerType>
MutantStack<T, ContainerType>::MutantStack() : std::stack<T, ContainerType>()
{
}

template <typename T, typename ContainerType>
MutantStack<T, ContainerType>::~MutantStack()
{
}

template <typename T, typename ContainerType>
MutantStack<T, ContainerType>::MutantStack(const MutantStack &other)
    : std::stack<T, ContainerType>(other)
{
}

template <typename T, typename ContainerType>
MutantStack<T, ContainerType> &MutantStack<T, ContainerType>::operator=(const MutantStack &other)
{
    if (this != &other)
        this->c = other.c;
    return *this;
}

template <typename T, typename ContainerType>
typename MutantStack<T, ContainerType>::iterator MutantStack<T, ContainerType>::begin()
{
    return this->c.begin();
}

template <typename T, typename ContainerType>
typename MutantStack<T, ContainerType>::iterator MutantStack<T, ContainerType>::end()
{
    return this->c.end();
}

template <typename T, typename ContainerType>
typename MutantStack<T, ContainerType>::const_iterator MutantStack<T, ContainerType>::cbegin()
{
    return this->c.begin();
}

template <typename T, typename ContainerType>
typename MutantStack<T, ContainerType>::const_iterator MutantStack<T, ContainerType>::cend()
{
    return this->c.end();
}

template <typename T, typename ContainerType>
typename MutantStack<T, ContainerType>::reverse_iterator MutantStack<T, ContainerType>::rbegin()
{
    return this->c.rbegin();
}

template <typename T, typename ContainerType>
typename MutantStack<T, ContainerType>::reverse_iterator MutantStack<T, ContainerType>::rend()
{
    return this->c.rend();
}

template <typename T, typename ContainerType>
typename MutantStack<T, ContainerType>::const_reverse_iterator MutantStack<T, ContainerType>::crbegin()
{
    return this->c.rbegin();
}

template <typename T, typename ContainerType>
typename MutantStack<T, ContainerType>::const_reverse_iterator MutantStack<T, ContainerType>::crend()
{
    return this->c.rend();
}