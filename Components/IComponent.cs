
using Microsoft.Xna.Framework;

namespace monogame_zelda
{
    public interface IComponent
    {
        void Update(Entity entity, GameTime gameTime);
        void Recieve(Message message);
    }
}