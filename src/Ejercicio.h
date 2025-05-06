#pragma once

#include <string>
#include <vector>
using namespace std;
#include <optional>
#include <nlohmann/json.hpp>

struct Cancion {
    int id;
    string nombre;
    string artista;
    double duracion;
};

inline void to_json(nlohmann::json& j, Cancion const& p) {
    j = nlohmann::json{{"id", p.id}, {"nombre", p.nombre}, {"artista", p.artista {"duracion", p.duracion}};
}
inline void from_json(nlohmann::json const& j, Cancion& p) {
    j.at("id").get_to(p.id);
    j.at("nombre").get_to(p.nombre);
    j.at("artista").get_to(p.artista);
    j.at("duracion").get_to(p.duracion);
}

class Ejercicio {

private:
    std::vector<Cancion> lista;
    std::string fichero;
public:
};