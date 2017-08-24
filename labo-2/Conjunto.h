     */
    void agregar(const tipo_elem& elem);

    // obervadores
    /**
     * Chequeo de pertenecia
     * @param elem elemento a buscar
     * @return true si el elemento se encuentra en el conjunto
     */
    bool pertenece(const tipo_elem& elem) const;

    // otras operaciones
    /**
     * Cardinal de conjunto
     * @return devuelve la cantidad de elementos del conjunto
     */
    unsigned int cardinal() const;

    // Estas operaciones devuelven un conjunto nuevo sin tocar "this"
    /**
     * Operación A U B
     * @param B otro conjunto
     * @return el resultado de la unión de los dos conjuntos
     */
    Conjunto unir(const Conjunto & B) const;
    /**
     * Operación A - B
     * @param B otro conjunto
     * @return un conjunto con los elementos de A que no están en B
     */
    Conjunto restar(const Conjunto & B) const;
    /**
     * Operación A ^ B (intersección)
     * @param B otro conjunto
     * @return Un conjunto con todos los elementos que están a la vez en A y en B
     */
    Conjunto intersectar(const Conjunto & B) const;
    /**
     * Operación (A U B) - (A ^ B)
     * @param B otro conjunto
     * @return un conjunto con todos los elementos que están o bien en A o en B pero no en ambos a la vez.
     */
    Conjunto diferencia_simetrica(const Conjunto & B) const;

    // Estas operaciones modifican el conjunto actual ("this")
    /**
     * Unión mutable. Modifica "this" sumando los elementos de B
     * @param B otro conjunto
     */
    void unido(const Conjunto & B);
    /**
     * Resta mutable. Modifica "this" restando los elementos de B
     * @param B otro conjunto
     */
    void restado(const Conjunto & B);
    /**
     * Intersección mutable
     * @param B otro conjunto
     */
    void intersectado(const Conjunto & B);

private:
    /**
     * Completar con lo que sea necesario...
     */
    std::vector<tipo_elem> conj;

};

#endif //ALGO2_LABO_CLASE2_CONJUNTO_H
