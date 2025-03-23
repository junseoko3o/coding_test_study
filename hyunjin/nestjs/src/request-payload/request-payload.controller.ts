import { Body, Controller, Post } from '@nestjs/common';
import { RequestPayloadDto } from './dto/request-payload.dto';

@Controller('request-payload')
export class RequestPayloadController {
  @Post()
  async create(@Body() createDto: RequestPayloadDto) {
    return new Promise((resolve) => {
      resolve(`${createDto?.age}살 ${createDto?.name}님 환영합니다`);
    });
  }
}
