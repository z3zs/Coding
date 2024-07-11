import axios from "axios";

export default axios.create({
        baseURL: ' https://ed6a-2804-d47-6068-db00-6ccb-5634-d4fa-b134.ngrok.io',
        headers: {"ngrok-skip-browser-warning": "true"}
    });