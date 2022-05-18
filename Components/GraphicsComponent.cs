using Microsoft.Xna.Framework;
using System;
using System.Collections.Generic;
using System.Text;

namespace monogame_zelda.Components
{
    interface GraphicsComponent : IComponent
    {
        new void Update(Entity entity, GameTime delta);
        new void Recieve(Message message);
    }
}
