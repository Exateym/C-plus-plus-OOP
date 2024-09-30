/* В эту программу можно добавить вывод ветвей для большей наглядности вывода дерева,
а также добавить исключения при выборе опций генерации, чтобы нельзя было сломать программу,
введя вместо числа значение другого типа */

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

// Узел дерева с инициализированными полями
struct Tree {
	Tree* previous = nullptr;
    long long identifier = 0;
    Tree* left = nullptr;
    Tree* right = nullptr;
};

// Создаёт лист для дерева, по алгоритму, согласно которому получается дерево поиска
void addLeaf(Tree* current_node, long long value, bool feedback) {
	// Проверка на то, чтобы идентификатор дерева не был отрицательным числом. Выход из рекурсии
	if (value < 0) {
		if (feedback)
			cout << "Нельзя добавить лист " << value << ". В качестве идентификатора нельзя использовать отрицательное число\n";
		return;
	}
	// Проверка на то, чтобы значение дерева не совпадало ни с одним значением других деревьев. Выход из рекурсии
	if (value == current_node->identifier) {
		if (feedback)
			cout << "Нельзя добавить лист " << value << ". Такое значение уже есть в дереве\n";
		return;
	}
	// Проверки на достижение конца дерева. Создание листа. Выход из рекурсии
	if (value < current_node->identifier && current_node->left == nullptr) {
		Tree* new_leaf = new Tree;
		new_leaf->identifier = value;
		current_node->left = new_leaf;
		new_leaf->previous = current_node;
		if (feedback)
			cout << "Успешно добавлен лист " << value << endl;
		return;
	}
	if (value > current_node->identifier && current_node->right == nullptr) {
		Tree* new_leaf = new Tree;
		new_leaf->identifier = value;
		current_node->right = new_leaf;
		new_leaf->previous = current_node;
		if (feedback)
			cout << "Успешно добавлен лист " << value << endl;
		return;
	}
	// Рекурсивное перемещение по узлам дерева
	if (value < current_node->identifier) {
		if (feedback)
			cout << "Переход на узел " << current_node->left->identifier << endl;
		addLeaf(current_node->left, value, feedback);
	}
	else {
		if (feedback)
			cout << "Переход на узел " << current_node->right->identifier << endl;
		addLeaf(current_node->right, value, feedback);
	}
}

unsigned short calculateDepth(Tree* current_node, unsigned short current_level, unsigned short maximal_level) {
	/* Когда функция дойдёт до несуществующего узла, случится возвращение номера последнего уровня.
	Этот номер не будет соответствовать номеру, на котором в данный момент находится рекурсия, потому что
	не будет выполнено условие увеличения вычисленного максимального значения */
	if (current_node == nullptr)
		return maximal_level;
	if (current_level > maximal_level)
		maximal_level = current_level;
	/* Следующие два шага должны совершить прямой обход дерева. Первая вызванная функция после работы рекурсии получит
	максимальное значение, которое будет вычислено путём сравнения глубины во время передвижения по всем поддеревьям
	левой части. Далее это значение будет участвовать при сравнивании по правой части. В конечном счёте первая вызванная
	функция вернёт значение и вычисления на этом закончатся */
	maximal_level = calculateDepth(current_node->left, current_level + 1, maximal_level);
	maximal_level = calculateDepth(current_node->right, current_level + 1, maximal_level);
	return maximal_level;
}

/* В главной функции после создания узлов может получится дерево, глубина которого максимум равна 32.
Поэтому может быть до 2^(32 - 1) листов, что соответствует числу 2147483648 */
unsigned int exponentiationOfNumberTwo(unsigned short degree) {
	unsigned int result = 1;
	for (int current_degree = 0; current_degree < degree; ++current_degree)
		result *= 2;
	return result;
}

int getLenghtOfNumber(long long number) {
	int current_length = 0;
	if (number < 0) {
		++current_length;
		number = -number;
	}
	while (number != 0) {
		number /= 10;
		++current_length;
	}
	return current_length;
}

string convertNumberToString(long long number) {
	string current_string = "";
	unsigned short length_of_number = getLenghtOfNumber(number);
	bool is_negative_number = false;
	if (number < 0) {
		is_negative_number = true;
		number = -number;
		/* После конвертации в строку длина числа будет на 1 меньше длины исходного числа.
		Это произойдёт, потому что процесс конвертации выводит только неотрицательные числа */
		--length_of_number;
	}
	while (number != 0) {
		unsigned short last_digit = number % 10;
		switch (last_digit) {
		case 0:
			current_string += '0';
			break;
		case 1:
			current_string += '1';
			break;
		case 2:
			current_string += '2';
			break;
		case 3:
			current_string += '3';
			break;
		case 4:
			current_string += '4';
			break;
		case 5:
			current_string += '5';
			break;
		case 6:
			current_string += '6';
			break;
		case 7:
			current_string += '7';
			break;
		case 8:
			current_string += '8';
			break;
		default:
			current_string += '9';
		}
		number /= 10;
	}
	string reversed_string = "";
	if (is_negative_number)
		reversed_string += '-';
	for (short index_of_character = length_of_number - 1; index_of_character > -1; --index_of_character)
		reversed_string += current_string[index_of_character];
	return reversed_string;
}

void printDirectWayIntoString(Tree* root_of_tree, Tree* current_node, string* targeted_string) {
	if (current_node == nullptr)
		return;
	else {
		if (current_node != root_of_tree)
			*targeted_string += ' ';
		*targeted_string += convertNumberToString(current_node->identifier);
		printDirectWayIntoString(root_of_tree, current_node->left, targeted_string);
		printDirectWayIntoString(root_of_tree, current_node->right, targeted_string);
	}
}

// Поиск ведётся слева направо
unsigned int findFreeIndexInLevel(long long* level) {
	unsigned int index = 0;
	bool index_has_been_found = false;
	while (!index_has_been_found) {
		if (level[index] == -2) // Означает свободное место
			index_has_been_found = true;
		else
			++index;
	}
	return index;
}

void copyTreeIntoMatrix(long long** matrix, Tree* current_node, unsigned short depth_limit, unsigned short current_depth) {
	// Для указателей на nullptr (узлы без идентификатора). Выход из рекурсии
	if (current_node == nullptr) {
		if (current_depth > depth_limit)
			return;
		long long* level = matrix[current_depth - 1];
		unsigned int index = findFreeIndexInLevel(level);
		level[index] = -1; // Означает nullptr
		copyTreeIntoMatrix(matrix, current_node, depth_limit, current_depth + 1);
		copyTreeIntoMatrix(matrix, current_node, depth_limit, current_depth + 1);
		return;
	}
	// Для всех узлов, кроме указателей на nullptr. Продолжение рекурсии
	long long* level = matrix[current_depth - 1];
	unsigned int index = findFreeIndexInLevel(level);
	level[index] = current_node->identifier;
	copyTreeIntoMatrix(matrix, current_node->left, depth_limit, current_depth + 1);
	copyTreeIntoMatrix(matrix, current_node->right, depth_limit, current_depth + 1);
}

// Удаление части дерева от указанного узла до его листов
void demolishCollapse(Tree* current_node, bool feedback) {
	// Обход дерева в обратном порядке 
	if (current_node->left != nullptr) {
		if (feedback)
			cout << "Переход на узел " << current_node->left->identifier << endl;
		demolishCollapse(current_node->left, feedback);
	}
	if (current_node->right != nullptr) {
		if (feedback)
			cout << "Переход на узел " << current_node->right->identifier << endl;
		demolishCollapse(current_node->right, feedback);
	}
	// Выход из рекурсии
	if (current_node->previous != nullptr) { // Если узел не является корнем дерева
		if (feedback)
			cout << "Узел " << current_node->identifier << "исходит из узла " << current_node->previous->identifier << endl;
		if (current_node->previous->left == current_node) { // Обнуление указателя на узел перед его удалением
			if (feedback)
				cout << "Обнуление левого указателя узла " << current_node->previous->identifier << endl;
			current_node->previous->left = nullptr;
		}
		else {
			if (feedback)
				cout << "Обнуление правого указателя узла " << current_node->previous->identifier << endl;
			current_node->previous->right = nullptr;
		}
	}
	if (feedback)
		cout << "Удаление узла " << current_node->identifier;
	delete current_node;
}

void printMatrixIntoArrayOfStrings(long long** matrix, unsigned short height, unsigned short width, string** array_of_strings, unsigned short string_index) {
	for (unsigned short index_of_array = 0; index_of_array < height; ++index_of_array) {
		string* temporary_string = new string;
		*temporary_string = "";
		for (unsigned short index_of_element = 0; index_of_element < width; ++index_of_element) {
			*temporary_string += convertNumberToString(matrix[index_of_array][index_of_element]);
			if (index_of_element != width - 1)
				*temporary_string += ' ';
		}
		array_of_strings[string_index] = temporary_string;
		++string_index;
	}
}

// Находит адрес самого правого листа дерева поиска. Поиск идёт от указанного адреса узла
Tree* findNodeWithMaximalKey(Tree* current_node) {
	while (current_node->right != nullptr)
		current_node = current_node->right;
	return current_node;
}

string createEmptyCell(unsigned short minimal_length_of_cell, unsigned short current_depth, unsigned short maximal_depth) {
	unsigned short width_of_cell = minimal_length_of_cell * exponentiationOfNumberTwo(maximal_depth - current_depth);
	string cell = "";
	for (int current_width_of_cell = 1; current_width_of_cell <= width_of_cell; ++current_width_of_cell)
		cell += ' ';
	return cell;
}

// Помещает символы числа в центр ячейки
string placeNumberInCell(long long number, unsigned short lenght_of_cell) {
	string converted_number = convertNumberToString(number);
	unsigned short length_of_number = getLenghtOfNumber(number);
	unsigned short amount_of_spaces = lenght_of_cell - length_of_number;
	if (amount_of_spaces == 1)
		return ' ' + converted_number;
	unsigned short length_of_corner = amount_of_spaces / 2;
	string corner = "";
	for (int current_length = 1; current_length <= length_of_corner; ++current_length)
		corner += ' ';
	string cell = corner + converted_number + corner;
	if (amount_of_spaces - length_of_corner * 2 == 1)
		cell += ' ';
	return cell;
}

string createKeepCell(unsigned short minimal_length_of_cell, long long number, unsigned short current_depth, unsigned short maximal_depth)
{
	unsigned short current_width_of_cell = minimal_length_of_cell * exponentiationOfNumberTwo(maximal_depth - current_depth);
	string cell = placeNumberInCell(number, current_width_of_cell);
	return cell;
}

void destroyMatrix(long long** matrix, unsigned short height) {
	for (unsigned short index_of_array = 0; index_of_array < height; ++index_of_array)
		delete[] matrix[index_of_array];
	delete[] matrix;
}

void destroyStrings(string** array_of_strings, unsigned short quantity_of_lines) {
	for (unsigned short index_of_string = 0; index_of_string < quantity_of_lines; ++index_of_string)
		delete array_of_strings[index_of_string];
	delete[] array_of_strings;
}




/* Смысловые обозначения конструкций, использованных в программе:
структура - каждое слово начинается с заглавной буквы, без пробелов между словами (Tree)
функция - первое слово со строчной, другие - с заглавной буквы, без пробелов между словами (addLeaf)
переменные - первое слово со строчной буквы, присутствует разделение слов нижним подчёркиванием (new_tree) */

int main() {
	system("Vertical visualization of search tree structure");
	system("chcp 65001");
	system("color f0");
	system("cls");

    Tree* root_of_tree = nullptr;
	srand(time(0));

	unsigned short chosen_option_for_number;
	bool choice_was_made = false;
	do {
		cout << "1. Единицы\n";
		cout << "2. До десятков\n";
		cout << "3. До сотен\n";
		cout << "4. До тысяч\n";
		cout << "5. Большие\n";
		cout << "6. Очень большие\n";
		cout << "7. Невероятно большие\n";
		cout << "Выберите числа, которые хотели бы увидеть в визуализации: ";
		cin >> chosen_option_for_number;
		if (chosen_option_for_number < 1 && chosen_option_for_number > 7) {
			cout << "\nОпции под этим номером нет в списке\n";
			system("pause");
		}
		else
			choice_was_made = true;
	} while (!choice_was_made);
	system("cls");

	unsigned short chosen_option_for_quantity;
	choice_was_made = false;
	do {
		cout << "1. От 5 до 8\n";
		cout << "2. От 8 до 32\n";
		cout << "Выберите количество узлов, которые хотели бы увидеть в визуализации: ";
		cin >> chosen_option_for_quantity;
		if (chosen_option_for_quantity < 1 && chosen_option_for_quantity > 2) {
			cout << "\nОпции под этим номером нет в списке\n";
			system("pause");
		}
		else
			choice_was_made = true;
	} while (!choice_was_made);
	system("cls");

	unsigned short quantity_of_nodes;
	if (chosen_option_for_quantity == 1) {
		quantity_of_nodes = rand() % 9;
		while (quantity_of_nodes < 5)
			++quantity_of_nodes;
	}
	else {
		quantity_of_nodes = rand() % 33;
		while (quantity_of_nodes < 8)
			++quantity_of_nodes;
	}
	
	long long* added_identifiers = new long long[quantity_of_nodes];
	for (unsigned short number_of_current_node = 1; number_of_current_node <= quantity_of_nodes; ++number_of_current_node) {
		/* Идентификаторы для узлов специально генерируются как числа с большой длиной,
		чтобы показать универсальность вертикального представления дерева в виде текста */
		long long value = 1;
		switch (chosen_option_for_number) {
			case 1:
				value *= rand() % 10;
				break;
			case 2:
				value *= rand() % 100;
				break;
			case 3:
				value *= rand() % 1000;
				break;
			case 4:
				value *= rand() % 10000;
				break;
			case 5:
				value *= rand();
				break;
			case 6:
				value *= rand();
				value *= rand();
				break;
			default:
				value *= rand();
				value *= rand();
				value *= rand();
		}
		if (number_of_current_node == 1) {
			root_of_tree = new Tree;
			root_of_tree->identifier = value;
			added_identifiers[0] = value;
		}
		else {
			addLeaf(root_of_tree, value, false);
			bool identifier_already_exist = false;
			for (unsigned short index_of_element = 0; index_of_element < quantity_of_nodes && !identifier_already_exist; ++index_of_element)
				if (value == added_identifiers[index_of_element]) {
					identifier_already_exist = true;
					--number_of_current_node;
				}
		}
	}
	delete[] added_identifiers; // Освобождение памяти от мусора

	// Создание матрицы по характеристикам дерева и заполнение её числами -2, которые обозначают свободное место
	const unsigned short height = calculateDepth(root_of_tree, 1, 1);
	const unsigned int width = exponentiationOfNumberTwo(height - 1);
	long long** matrix = new long long* [height];
	for (unsigned short index_of_array = 0; index_of_array < height; ++index_of_array) {
		long long* current_array = new long long [width];
		for (unsigned int index_of_element = 0; index_of_element < width; ++index_of_element)
			current_array[index_of_element] = -2;
		matrix[index_of_array] = current_array; // Заполнение массива указателями на массивы с идентификаторами
	}

	string** output_lines = new string* [4 + height * 2]; // Формирование массива строчек для файла выхода
	unsigned short index_of_current_line = 0;

	string* temporary_string = new string;
	*temporary_string = "Вывод значений узлов по прямому обходу:";
	output_lines[index_of_current_line] = temporary_string;
	++index_of_current_line;

	temporary_string = new string;
	*temporary_string = "";
	printDirectWayIntoString(root_of_tree, root_of_tree, temporary_string);
	output_lines[index_of_current_line] = temporary_string;
	++index_of_current_line;

	copyTreeIntoMatrix(matrix, root_of_tree, height, 1);
	temporary_string = new string;
	*temporary_string = "Матрица со значениями из дерева поиска:";
	output_lines[index_of_current_line] = temporary_string;
	++index_of_current_line;

	printMatrixIntoArrayOfStrings(matrix, height, width, output_lines, index_of_current_line);
	index_of_current_line += height;

	temporary_string = new string;
	*temporary_string = "Вертикальная визуализация:";
	output_lines[index_of_current_line] = temporary_string;
	++index_of_current_line;

	// Найти длину для ячейки последнего уровня (с учётом пробела)
	unsigned short length_of_cell = 1 + getLenghtOfNumber(findNodeWithMaximalKey(root_of_tree)->identifier);

	// Освобождение памяти от структуры дерева и обнуление указателя на корень
	demolishCollapse(root_of_tree, false);
	root_of_tree = nullptr;

	for (unsigned short index_of_array = 0; index_of_array < height; ++index_of_array) {
		temporary_string = new string;
		*temporary_string = "";
		for (int index_of_element = 0; index_of_element < exponentiationOfNumberTwo(index_of_array); ++index_of_element) {
			if (matrix[index_of_array][index_of_element] < 0)
				*temporary_string += createEmptyCell(length_of_cell, index_of_array, height);
			else {
				long long number = matrix[index_of_array][index_of_element];
				*temporary_string += createKeepCell(length_of_cell, number, index_of_array, height);
			}
		}
		output_lines[index_of_current_line] = temporary_string;
		++index_of_current_line;
	}
	destroyMatrix(matrix, height); // Освобождение памяти от мусора

	remove("Vertical visualization of search tree structure.txt");
	ofstream output_file("Vertical visualization of search tree structure.txt");
	unsigned short last_index = index_of_current_line - 1;
	for (index_of_current_line = 0; index_of_current_line <= last_index; ++index_of_current_line) {
		output_file << *output_lines[index_of_current_line];
		if (index_of_current_line != last_index)
			output_file << endl;
	}
	destroyStrings(output_lines, last_index + 1); // Освобождение памяти от мусора
	
	cout << "Вся информация о дереве была успешно визуализирована\n";
	cout << "в файле Vertical visualization of search tree structure.txt\n\n";
	system("pause");

    return 0;
}