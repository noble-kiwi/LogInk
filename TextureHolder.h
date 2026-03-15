#pragma once
#include <SFML/Graphics.hpp>
#include <map>
#include <string>

// Singleton-like class for loading and storing textures.
// Ensures each texture is loaded only once and can be accessed globally.
class TextureHolder {
private:
    std::map<std::string, sf::Texture> m_Textures;   // Container for loaded textures
    static TextureHolder* m_s_Instance;               // Singleton instance pointer

public:
    TextureHolder();
    // Returns a reference to the texture associated with the given filename.
    // If the texture hasn't been loaded yet, it loads it first.
    static sf::Texture& getTexture(const std::string& filename);
};
