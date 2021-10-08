using Microsoft.AspNetCore.Mvc;

namespace chat_app.Controllers
{
    
    [Route("chat/message")]
    public class UserController: Controller
    {
        public IActionResult Post() => Ok();
    }
}