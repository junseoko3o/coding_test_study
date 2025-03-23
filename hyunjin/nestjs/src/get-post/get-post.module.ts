import { Module } from '@nestjs/common';
import { GetPostController } from './get-post.controller';

@Module({
  controllers: [GetPostController],
})
export class GetPostModule {}
