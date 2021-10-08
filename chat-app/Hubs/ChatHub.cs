using System.Threading.Tasks;
using Microsoft.AspNetCore.SignalR;

namespace chat_app.Hubs
{
    public class ChatHub: Hub
    {
        //private readonly string _botUser;
        private ChatHub(){
            //_botUser = "My Chat Bot";
        }

        public async Task AskServer(string someTextFromClient){
            string temp;
            if (someTextFromClient == "hey"){
                temp = "message was 'hey'";
            }
            else{
                temp = "message was something else";
            }
            await Clients.Client(this.Context.ConnectionId).SendAsync("askServerResponse", temp);
        }
        // public async Task Send(string message){
        //     await Clients.All.SendAsync("Send", message);
        // }
        // public async Task JoinRoom(UserConnection userConnection){
        //     await Groups.AddToGroupAsync(Context.ConnectionId, userConnection.Room);
        //     await Clients.Group(userConnection.Room).SendAsync("ReceiveMessage", _botUser,
        //         $"{userConnection.User} has joined  {userConnection.Room}");
        // }
    }
}