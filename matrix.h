/**
 * \file matrix.h
 * \author František Pártl (fpartl@ntis.zcu.cz)
 * \brief Hlavičkový soubor knihovny pro práci s maticemi.
 * \version 1.0
 * \date 2020-09-07
 *
 * Soubor obsahuje definici struktury `matrix`, která představuje obecnou dvourozměrnou matici
 * s položkami typu `mat_num_type`. Obsahuje rovněž definice operací sčítání a násobení nad maticemi.
 */

#ifndef MATRIX_H
#define MATRIX_H

#include <stddef.h>

/**< Definice formátu pro výpis položek matice. */
#define MAT_NUMBER_FORMAT "%05.2f "

/**< Definice typu pro položky obsažené v matici. */


/**
 * \struct matrix
 * \brief Struktura představující matici s položkami typu mat_num_type.
 */
typedef struct matrix{
    double **data;  // Pointer to an array of pointers (rows)
    size_t rows;    // Number of rows
    size_t cols;    // Number of columns
};


/**
 * \brief matrix_allocate Funkce dynamicky alokuje instanci struktury `matrix` a pomocí funkcí `matrix_init`
 *                        a `matrix_fill` ji inicializuje.
 * \param rows Počet řádků nové matice.
 * \param cols Počet sloupců nové matice.
 * \param i_val Hodnota položek nové matice.
 * \return Ukazatel na nově vytvořenou matici nebo `NULL` při chybě.
 */
struct matrix *matrix_allocate(const size_t rows, const size_t cols);

/**
 * \brief Funkce provede inicializaci instance struktury `matrix`, která je dána ukazatelem `mat`.
 *        Pomocí funkce `matrix_fill` bude matice naplněna hodnotou `i_val`.
 * \param mat Ukazatel na instanci struktury `matrix`, která bude inicializována.
 * \param rows Počet řádků inicializované matice.
 * \param cols Počet sloupců inicializované matice.
 * \param i_val Hodnota položek nové matice.
 * \return int 1, pokud inicializace proběhla v pořádku, jinak 0.
 */
double *matrix_addrow(const size_t cols);

/**
 * \brief Funkce provede deinicializaci, uvolní vnitřní členy struktury `matrix`, která je dána ukazatelem `mat`.
 * \param mat Ukazatel na deinicializovanou instanci struktury `matrix`.
 */
void matrix_delrow(struct matrix *mat, size_t index);

/**
 * \brief matrix_free Funkce provede uvolnění dynamicky alokované matice.
 * \param poor Ukazatel na ukazatel na matici určenou k uvolnění.
 */
void matrix_free(struct matrix **mat);

/**
 * \brief matrix_fill Funkce nastaví položky zadané matice `mat` na hodnotu `val`.
 * \param mat Ukazatel na matici, jejíž položky budou nastaveny.
 * \param val Nová hodnota položek matice.
 */
void matrix_add(struct matrix *mat, const size_t rows, const size_t cols, const double val);

/**
 * \brief matrix_print Funkce vytiskne matici na standardní výstup.
 * \param mat Ukazatel na vypisovanou matici.
 */
void matrix_print(const struct matrix *mat);

/**
 * \brief matrix_at Funkce vrací hodnotu prvku matice na daných souřadnicích. Funkce nekontroluje
 *                  rozsah zadaného řádku a sloupce -- při nesprávném použití může dojít k segmentační
 *                  chybě.
 * \param mat Ukazatel na matici z níž bude prvek vybírán.
 * \param row Řádek matice.
 * \param col Sloupec matice.
 * \return Hodnota prvku matice na daných souřadnicích.
 */
double matrix_get(const struct matrix *mat, const size_t row, const size_t col);

/**
 * \brief matrix_set Funkce nastaví hodnotu prvku matice na daných souřadnicích na hodnotu `val`.
 * \param mat Ukazatel na matici, jejíž prvek bude nastavován.
 * \param row Řádek matice.
 * \param col Sloupec matice.
 * \param val Nová hodnotu prvku na daných souřadnicích.
 */
void matrix_set(struct matrix *mat, const size_t row, const size_t col, double val);








#endif
