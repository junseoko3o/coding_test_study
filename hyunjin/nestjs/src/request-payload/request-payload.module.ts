import { Module } from '@nestjs/common';
import { RequestPayloadController } from './request-payload.controller';

@Module({
  controllers: [RequestPayloadController],
})
export class RequestPayloadModule {}
